#ifndef SETTINGS_H
#define SETTINGS_H

#include <QDialog>
#include <QSettings>
#include<QApplication>
namespace Ui {
class Settings;
}

class Settings : public QDialog
{
    Q_OBJECT

public:
    QString Dir_setting_file=QApplication::applicationDirPath()+"/Settings.ini";
     QSettings* Settings_Pro = new QSettings(Dir_setting_file, QSettings::IniFormat);
     bool tests(){return triggerDayUpdate;}
    explicit Settings(QWidget *parent = 0);
    ~Settings();

private slots:
    void on_checkBox_stateChanged(int arg1);
    void on_save_push_clicked();

    void on_Grabbing_PButton_clicked();

    void on_Grabbing_Day_PButton_clicked();

private:
    Ui::Settings *ui;
    bool triggerDayUpdate=false;

};

#endif // SETTINGS_H
