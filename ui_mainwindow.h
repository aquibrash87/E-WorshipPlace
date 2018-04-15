/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *Fajer;
    QLabel *Shourq;
    QLabel *Duhur;
    QLabel *Asr;
    QLabel *Magrib;
    QLabel *Asha;
    QPushButton *pushButton;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *Magrib_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(668, 470);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 40, 75, 158));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Fajer = new QLabel(layoutWidget);
        Fajer->setObjectName(QStringLiteral("Fajer"));

        verticalLayout_2->addWidget(Fajer);

        Shourq = new QLabel(layoutWidget);
        Shourq->setObjectName(QStringLiteral("Shourq"));

        verticalLayout_2->addWidget(Shourq);

        Duhur = new QLabel(layoutWidget);
        Duhur->setObjectName(QStringLiteral("Duhur"));

        verticalLayout_2->addWidget(Duhur);

        Asr = new QLabel(layoutWidget);
        Asr->setObjectName(QStringLiteral("Asr"));

        verticalLayout_2->addWidget(Asr);

        Magrib = new QLabel(layoutWidget);
        Magrib->setObjectName(QStringLiteral("Magrib"));

        verticalLayout_2->addWidget(Magrib);

        Asha = new QLabel(layoutWidget);
        Asha->setObjectName(QStringLiteral("Asha"));

        verticalLayout_2->addWidget(Asha);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 250, 91, 29));
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 40, 75, 158));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        Magrib_2 = new QLabel(centralWidget);
        Magrib_2->setObjectName(QStringLiteral("Magrib_2"));
        Magrib_2->setGeometry(QRect(120, 250, 73, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 668, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        Fajer->setText(QApplication::translate("MainWindow", "Fajer : ", Q_NULLPTR));
        Shourq->setText(QApplication::translate("MainWindow", "Shrouq :", Q_NULLPTR));
        Duhur->setText(QApplication::translate("MainWindow", "Duhur :", Q_NULLPTR));
        Asr->setText(QApplication::translate("MainWindow", "Asr :", Q_NULLPTR));
        Magrib->setText(QApplication::translate("MainWindow", "Magrib :", Q_NULLPTR));
        Asha->setText(QApplication::translate("MainWindow", "Asha :", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Fajer : ", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Shrouq :", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Duhur :", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Asr :", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Magrib :", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Asha :", Q_NULLPTR));
        Magrib_2->setText(QApplication::translate("MainWindow", "Magrib :", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
