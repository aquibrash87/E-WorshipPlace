#include "mainwindow.h"
#include <QApplication>
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
//test

    return a.exec();
}
