#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSql/QtSql>
#include<QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include<iostream>
#include<QtWidgets/QMessageBox>
#include<QDate>
#include<Qt>
#include<QLocale>
#include<QtWebKitWidgets/QWebFrame>
#include<QtWebKit/QWebElement>
#include<QtWebKitWidgets/QtWebKitWidgets>
#include<QTimer>
#include<QDateTime>
#include<QVector>
#include<time.h>

using namespace  std;

QString PrintCalender(int d, int m, int y);
QString PrintCalend() {
    const time_t current_time = time(NULL);
    tm * t = localtime(&current_time);
     int d = t -> tm_mday, m = (t -> tm_mon) + 1, y = (t -> tm_year) + 1900;

    QString Dateah=PrintCalender(d, m , y);
    return Dateah;
       }

int LastDayOfGregorianMonth(int month, int year) {
// Compute the last date of the month for the Gregorian calendar.

  switch (month) {
  case 2:
    if ((((year % 4) == 0) && ((year % 100) != 0))
        || ((year % 400) == 0))
      return 29;
    else
      return 28;
  case 4:
  case 6:
  case 9:
  case 11: return 30;
  default: return 31;
  }
}

int calcAbsGregorianDays(int d, int m, int y) {
    int N = d;
    for (int i = m - 1; i > 0; i--)
        N += LastDayOfGregorianMonth(i, y);

    return N + (y - 1) * 365
             + (y - 1) / 4
             - (y - 1) / 100
             + (y - 1) / 400;
}

bool IsIslamicLeapYear(int year) {
// True if year is an Islamic leap year

  if ((((11 * year) + 14) % 30) < 11)
    return true;
  else
    return false;
}

int LastDayOfIslamicMonth(int month, int year) {
// Last day in month during year on the Islamic calendar.

  if (((month % 2) == 1) || ((month == 12) && IsIslamicLeapYear(year)))
    return 30;
  else
    return 29;
}

const int IslamicEpoch = 227014; // Absolute date of start of Islamic calendar

int IslamicDate(int month, int day, int year) {
    return (day                      // days so far this month
            + 29 * (month - 1)       // days so far...
            + month/2                //            ...this year
            + 354 * (year - 1)       // non-leap days in prior years
            + (3 + (11 * year)) / 30 // leap days in prior years
            + IslamicEpoch);                // days before start of calendar
}

char const *getMonthName(int m)
{
    switch (m)
    {
        case 1:
            return "محرّم";
        case 2:
            return "صفر";
        case 3:
            return "ربيع الأول";
        case 4:
            return " ربيع الاخر";
        case 5:
            return "جمادى الأولى";
        case 6:
            return "جمادى الآخرة";
        case 7:
            return "رجب";
        case 8:
            return "شعبان";
        case 9:
            return "رمضان";
        case 10:
            return "شوال";
        case 11:
            return "ذو العقدة";
        case 12:
            return "ذو الحجة";
    }
    return "";
}
QString PrintCalender(int d, int m, int y){
    d = calcAbsGregorianDays(d, m, y);
    int month, day, year;

    // Search forward year by year from approximate year
    year = (d - IslamicEpoch) / 355;

    while (d >= IslamicDate(1, 1, year))
        year++;

    year--;
    // Search forward month by month from Muharram
    month = 1;
    while (d > IslamicDate(month, LastDayOfIslamicMonth(month, year), year))
        month++;

    day = d - IslamicDate(month, 1, year) + 1;
    QString Hijri =QVariant(day).toString()+"-"+ getMonthName(month) +"-"+QVariant(year).toString() ;
cout<<year<<"-"<<getMonthName(month)<<"-"<<day;

return Hijri;
}
void MainWindow::showTime()
{
     //qDebug()<<eventDayUpdate<<endl;
    QTime time =  QTime::currentTime();
    QString text = time.toString("hh:mm");
    if ((time.second() % 2) == 0)
        text[2] = ' ';
    ui->min->setText(text);
    //qDebug()<<time.toString();
    if(time.toString()=="00:00:00")
        eventDayUpdate=true;
    if(QDate::currentDate().month()!=storedMonth)
        eventMonthUpdate=true;
    if(eventDayUpdate)
    {
        get_info();
        //ui->Magrib_3->setText(days_arabic[day_number]);
        QString* pray= new QString[7];
        pray=get_info();

        // Updating the times on current GUI
        ui->Fajer->setText(pray[0]);
        ui->Shourq->setText(pray[1]);
        ui->Duhur->setText(pray[2]);
        ui->Asr->setText(pray[3]);
        ui->Magrib->setText(pray[4]);
        ui->Asha->setText(pray[5]);
        // Updating Hadith arabic and English with Automatic sizing of the fontjhv
        ui->label_13->setText(pray[6]);
        ui->label_15->setText(pray[7]);


        eventDayUpdate=false;
    }
    if(eventMonthUpdate)
    {
        qDebug()<<"it works :"<<eventMonthUpdate;
        grabbing_times();
        eventMonthUpdate=false;
        storedMonth=QDate::currentDate().month();
    }

}

void grabbing_times(){

    QUrl url = QUrl("https://www.gebetszeiten.de/Chemnitz/month/gebetszeiten-Chemnitz/169213-mwl86/");
    QWebView *view = new QWebView();
    view->load(url);
    QString fajer_search_elements="tr.fajrRow";
    QString Shrouq_search_elements="tr.shuruukRow";
    QString dhuhr_search_elements="tr.dhuhrRow";
    QString assr_search_elements="tr.assrRow";
    QString magrib_search_elements="tr.maghrebRow";
    QString ishaa_search_elements="tr.ishaaRow";
    QEventLoop loop;
    QNetworkAccessManager num;
    QNetworkRequest req(url);
    QNetworkReply *reply = num.get(req);
    MainWindow::connect(reply,&QNetworkReply::finished,&loop,&QEventLoop::quit);
    loop.exec();
    QString buffer = reply->readAll();
    QWebFrame *frame =view->page()->mainFrame();
    frame->setHtml(buffer);
    QWebElement document = frame->documentElement();
    QWebElementCollection fajer_elements = document.findAll(fajer_search_elements);
    QWebElementCollection Shrouq_elements = document.findAll(Shrouq_search_elements);
    QWebElementCollection dhuhr_elements = document.findAll(dhuhr_search_elements);
    QWebElementCollection assr_elements = document.findAll(assr_search_elements);
    QWebElementCollection magrib_elements = document.findAll(magrib_search_elements);
    QWebElementCollection ishaa_elements = document.findAll(ishaa_search_elements);



    QRegExp rx("(\\ |\\,|\\.|\\t|\\n)");
    QStringList fajer_list;
    QStringList Shrouq_list;
    QStringList dhuhr_list;
    QStringList assr_list;
    QStringList magrib_list;
    QStringList ishaa_list;
    QStringList fajer_list_new;
    QStringList Shrouq_list_new;
    QStringList dhuhr_list_new;
    QStringList assr_list_new;
    QStringList magrib_list_new;
    QStringList ishaa_list_new;
    foreach (QWebElement fajer, fajer_elements){fajer_list= fajer.toPlainText().split(rx);for(int i=0;i<fajer_list.size();i++){if(fajer_list[i]=="Fadschr"|| fajer_list[i]=="*"){}else{fajer_list_new.append(fajer_list[i]);}}}
    foreach (QWebElement Shrouq, Shrouq_elements){Shrouq_list= Shrouq.toPlainText().split(rx);for(int i=0;i<Shrouq_list.size();i++){if(Shrouq_list[i]=="S'Aufgang"|| Shrouq_list[i]=="*"){}else{Shrouq_list_new.append(Shrouq_list[i]);}}}
    foreach (QWebElement dhuhr, dhuhr_elements){dhuhr_list= dhuhr.toPlainText().split(rx);for(int i=0;i<dhuhr_list.size();i++){if(dhuhr_list[i]=="Dhuhur"|| dhuhr_list[i]=="*"){}else{dhuhr_list_new.append(dhuhr_list[i]);}}}
    foreach (QWebElement assr, assr_elements){assr_list= assr.toPlainText().split(rx);for(int i=0;i<assr_list.size();i++){if(assr_list[i]=="'Assr"|| assr_list[i]=="*"){}else{assr_list_new.append(assr_list[i]);}}}
    foreach (QWebElement magrib, magrib_elements){magrib_list= magrib.toPlainText().split(rx);for(int i=0;i<magrib_list.size();i++){if(magrib_list[i]=="Maghrib"|| magrib_list[i]=="*"){}else{magrib_list_new.append(magrib_list[i]);}}}
    foreach (QWebElement ishaa, ishaa_elements){ishaa_list= ishaa.toPlainText().split(rx);for(int i=0;i<ishaa_list.size();i++){if(ishaa_list[i]=="Ischaa"|| ishaa_list[i]=="*"){}else{ishaa_list_new.append(ishaa_list[i]);}}}
    qDebug()<<fajer_list_new;
    qDebug()<<dhuhr_list_new;
    qDebug()<<Shrouq_list_new;
    qDebug()<<assr_list_new;
    qDebug()<<magrib_list_new;
    qDebug()<<ishaa_list_new;
    for(int i=0; i<fajer_list_new.size();i++){
        QString fajer=fajer_list_new[i];
        QString shrouq=Shrouq_list_new[i];
        QString dhuhr=dhuhr_list_new[i];
        QString assr=assr_list_new[i];
        QString mgrb=magrib_list_new[i];
        QString ishaa=ishaa_list_new[i];
        QDate current_date= QDate::currentDate();
        QDate date1;
        date1.setDate(current_date.year(),current_date.month(),1);
        QString date = date1.addDays(i).toString(Qt::ISODate);
        QSqlQuery query1;
        QString ha="";
        QString he="";


        query1.prepare("INSERT INTO `pry_table` (`date`, `fjr`, `shrq`, `dhr`, `asr`, `mgrb`, `ash`, `midnight`, `hadith_eng`, `hadith_de`) VALUES ('"+date+"', '"+fajer+"', '"+shrouq+"', '"+dhuhr+"', '"+assr+"', '"+mgrb+"', '"+ishaa+"', '', '"+ha+"', '"+he+"')");
        query1.bindValue("date",date);
        query1.bindValue("fajer",fajer);
        query1.bindValue("shrouq",shrouq);
        query1.bindValue("dhuhr",dhuhr);
        query1.bindValue("assr",assr);
        query1.bindValue("mgrb",mgrb);
        query1.bindValue("ishaa",ishaa);
        query1.bindValue("ha",ha);
        query1.bindValue("he",he);
        query1.exec();



    }

}

void connect_database(){

    QMessageBox msg;
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setUserName("ibrahim");
    db.setPassword("root");
    db.setDatabaseName("db_ib");

    if(db.open()){
        msg.setText("the database connected");
        msg.exec();
    }
    else{
        msg.setText("the database unconnected");
        msg.exec();
    }
}


QString* get_info(){struct QVariant;
                         {

        //define a variable for Date and convert it to string and this variable has a method to add days
        //so by increase g the date will increase
        QString date1 =QDate::currentDate().toString(Qt::ISODate);
       // qDebug()<<date1<<a;
        QSqlQuery query;
        query.prepare("SELECT `date`,TIME_FORMAT(`fjr`,'%H:%i'), TIME_FORMAT(`shrq`,'%H:%i'),TIME_FORMAT(`dhr`,'%H:%i') ,TIME_FORMAT(`asr`,'%H:%i'),TIME_FORMAT(`mgrb`,'%H:%i'),TIME_FORMAT(`ash`,'%H:%i'),`midnight`, `hadith_eng`, `hadith_de` FROM `pry_table` WHERE `date`='"+date1+"'");
        query.bindValue("date",date1);
        query.exec();
        //qDebug(query);
        query.first();

        //put the date in variables to use later
        QString fajer= query.value(1).toString();
        QString shrq= query.value(2).toString();
        QString dhr= query.value(3).toString();
        QString asr= query.value(4).toString();
        QString mgrb= query.value(5).toString();
        QString ash= query.value(6).toString();
        QString ha= query.value(8).toString();
        QString he= query.value(9).toString();

        QString* pray= new QString[8];
        pray[0]=fajer;
        pray[1]=shrq;
        pray[2]=dhr;
        pray[3]=asr;
        pray[4]=mgrb;
        pray[5]=ash;
        pray[6]=ha;
        pray[7]=he;

        return pray;
                         }}



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)


{
    ui->setupUi(this);
    connect_database();
    QTimer *timer = new QTimer();
    connect(timer, SIGNAL(timeout()),this,SLOT(showTime()));
    timer->start(1000);
    QMainWindow::showFullScreen();
    QString Date_interface= QDate::currentDate().toString(Qt::ISODate);
    ui->Magrib_2->setText(Date_interface);
    ui->label_16->setText(PrintCalend());







}


MainWindow::~MainWindow()
{
    delete ui;
}
//intial g by -4 cause the date i have it is less then the current day by 4

void MainWindow::on_pushButton_clicked()
{

    //just uncomment the next function for grabbing date from Gebetszeit
    grabbing_times();





}
