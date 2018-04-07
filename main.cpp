#include "mainwindow.h"
#include <QApplication>
#include<connect.h>
#include<QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include<QLabel>
#include<string.h>
#include<QVariant>
#include<QMessageBox>
#include<iostream>

using namespace std;
int  main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
//QMessageBox msd;
//    connect();

//msd.setText(fajer);
//msd.exec();



    return a.exec();
}
