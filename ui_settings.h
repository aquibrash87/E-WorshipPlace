/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *Grabbing_GBox;
    QPushButton *Grabbing_PButton;
    QPushButton *Grabbing_Day_PButton;
    QWidget *tab_2;
    QGroupBox *groupBox;
    QCheckBox *checkBox;
    QLineEdit *Isha_Time;
    QLabel *label;
    QPushButton *save_push;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QStringLiteral("Settings"));
        Settings->resize(624, 421);
        tabWidget = new QTabWidget(Settings);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 0, 591, 371));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        Grabbing_GBox = new QGroupBox(tab);
        Grabbing_GBox->setObjectName(QStringLiteral("Grabbing_GBox"));
        Grabbing_GBox->setGeometry(QRect(10, 10, 171, 121));
        Grabbing_PButton = new QPushButton(Grabbing_GBox);
        Grabbing_PButton->setObjectName(QStringLiteral("Grabbing_PButton"));
        Grabbing_PButton->setGeometry(QRect(10, 30, 141, 29));
        Grabbing_Day_PButton = new QPushButton(Grabbing_GBox);
        Grabbing_Day_PButton->setObjectName(QStringLiteral("Grabbing_Day_PButton"));
        Grabbing_Day_PButton->setGeometry(QRect(10, 70, 141, 29));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 161, 121));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(10, 30, 95, 27));
        Isha_Time = new QLineEdit(groupBox);
        Isha_Time->setObjectName(QStringLiteral("Isha_Time"));
        Isha_Time->setGeometry(QRect(10, 60, 71, 29));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 60, 67, 21));
        tabWidget->addTab(tab_2, QString());
        save_push = new QPushButton(Settings);
        save_push->setObjectName(QStringLiteral("save_push"));
        save_push->setGeometry(QRect(510, 380, 91, 29));

        retranslateUi(Settings);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Settings", Q_NULLPTR));
        Grabbing_GBox->setTitle(QApplication::translate("Settings", "Grabbing Data", Q_NULLPTR));
        Grabbing_PButton->setText(QApplication::translate("Settings", "Grabbing Month", Q_NULLPTR));
        Grabbing_Day_PButton->setText(QApplication::translate("Settings", "Grabbing Day", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Settings", "Gerenal", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Settings", "Specific Time for Isha", Q_NULLPTR));
        checkBox->setText(QApplication::translate("Settings", "Active ", Q_NULLPTR));
        label->setText(QApplication::translate("Settings", "Minutes", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Settings", "Prayer", Q_NULLPTR));
        save_push->setText(QApplication::translate("Settings", "Save", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
