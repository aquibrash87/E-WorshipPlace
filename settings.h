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
    explicit Settings(QWidget *parent = 0);
    ~Settings();

private slots:
    void on_checkBox_stateChanged(int arg1);
    void on_save_push_clicked();

private:
    Ui::Settings *ui;
};

#endif // SETTINGS_H
