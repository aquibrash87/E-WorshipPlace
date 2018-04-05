#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSql/QtSql>
#include<QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include<iostream>
#include<QMessageBox>
#include<QDate>
#include<Qt>
#include<QLocale>
//#include<connect.h>
using namespace  std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)


{
    ui->setupUi(this);

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

MainWindow::~MainWindow()
{
    delete ui;
}
//intial g by -4 cause the date i have it is less then the current day by 4
int g=-4;
void MainWindow::on_pushButton_clicked()
{

    g=g+1;


//struct to fetch the data from MySql
    struct QVariant;
    {

//define a variable for Date and convert it to string and this variable has a method to add days
        //so by increase g the date will increase
QString date =QDate::currentDate().addDays(g).toString(Qt::ISODate);
        qDebug()<<date<<g;
        QSqlQuery query;
         query.prepare("SELECT * FROM `pry_table` WHERE `date`='"+date+"'" );
        query.bindValue("date",date);
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
      ui->Fajer->setText(fajer);
      ui->Shourq->setText(shrq);
      ui->Duhur->setText(dhr);
      ui->Asr->setText(asr);
      ui->Magrib->setText(mgrb);
      ui->Asha->setText(ash);
    }}
