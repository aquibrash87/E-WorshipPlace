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


//#include<QtWebKitWidgets/QWebFrame>
#include<QtWebKit/QWebElement>

#include<QtWebKitWidgets/QtWebKitWidgets>
using namespace  std;

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


   query1.prepare("INSERT INTO `pry_table` (`date`, `fjr`, `shrq`, `dhr`, `asr`, `mgrb`, `ash`, `midnight`, `hadith_eng`, `hadith_de`) VALUES ('"+date+"', '"+fajer+"', '"+shrouq+"', '"+dhuhr+"', '"+assr+"', '"+mgrb+"', '"+ishaa+"', '', '', '')");
   query1.bindValue("date",date);
   query1.bindValue("fajer",fajer);
   query1.bindValue("shrouq",shrouq);
   query1.bindValue("dhuhr",dhuhr);
   query1.bindValue("assr",assr);
   query1.bindValue("mgrb",mgrb);
   query1.bindValue("ishaa",ishaa);
   query1.exec();



   }

   }

void connect_database(){

    QMessageBox msg;
   QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
   db.setHostName("sql7.freemysqlhosting.net");
   db.setUserName("sql7232980");
   db.setPassword("emQi4QeKmX");
   db.setDatabaseName("sql7232980");
   if(db.open()){
     msg.setText("the database connected");
     msg.exec();

     }
                 else{
             msg.setText("the database unconnected");
             msg.exec();
      }



   }


QString* get_info(int a){struct QVariant;
    {

//define a variable for Date and convert it to string and this variable has a method to add days
        //so by increase g the date will increase
QString date1 =QDate::currentDate().addDays(a).toString(Qt::ISODate);
        qDebug()<<date1<<a;
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
    QString* pray= new QString[6];
    pray[0]=fajer;
    pray[1]=shrq;
    pray[2]=dhr;
    pray[3]=asr;
    pray[4]=mgrb;
    pray[5]=ash;
return pray;
    }}



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)


{
    ui->setupUi(this);
connect_database();
QMainWindow::showFullScreen();



}


MainWindow::~MainWindow()
{
    delete ui;
}
//intial g by -4 cause the date i have it is less then the current day by 4
int g=0;
void MainWindow::on_pushButton_clicked()
{

    //just uncomment the next function for grabbing date from Gebetszeit
 //grabbing_times();

g=g+1;

QString date =QDate::currentDate().addDays(g).toString(Qt::SystemLocaleLongDate);
   ui->Magrib_2->setText(date);

    QString* pray= new QString[7];
    pray=get_info(g);
    ui->Fajer->setText(pray[0]);
    ui->Shourq->setText(pray[1]);
    ui->Duhur->setText(pray[2]);
    ui->Asr->setText(pray[3]);
    ui->Magrib->setText(pray[4]);
    ui->Asha->setText(pray[5]);

//struct to fetch the data from MySql
    }
