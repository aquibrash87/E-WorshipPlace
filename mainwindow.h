#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql/QSqlQuery>
#include <QtSql/QtSql>
#include<QtSql/QSqlDatabase>
#include<iostream>
#include<QMessageBox>
#include<QDate>
#include<Qt>
#include<QLocale>
#include<QtWebKitWidgets/QWebFrame>

extern int g;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
     QSqlQuery  query;



    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void showTime();


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

