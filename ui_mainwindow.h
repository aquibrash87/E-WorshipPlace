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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <dynamicfontsizelabel.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *Magrib_2;
    QLabel *Fajer;
    QLabel *Shourq;
    QLabel *Duhur;
    QLabel *Asr;
    QLabel *Magrib;
    QLabel *Asha;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_6;
    QLabel *min;
    QLabel *label_16;
    DynamicFontSizeLabel *label_13;
    DynamicFontSizeLabel *label_15;
    QGraphicsView *graphicsView;
    QGraphicsView *graphicsView_2;
    QLabel *label_14;
    QLabel *AqamaLabelCounter;
    DynamicFontSizeLabel *time_remain_en;
    QLabel *time_value;
    QLabel *time_remain_ar;
    DynamicFontSizeLabel *event;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1204, 684);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setCursor(QCursor(Qt::PointingHandCursor));
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QLatin1String("QMainWindow{\n"
"border-image: url(:/new/prefix1/images/background-clock.jpg) 0 0 0 0 stretch stretch;\n"
"border-width: 0px;\n"
"\n"
"}\n"
"color:rgb(239, 41, 41);\n"
"	\n"
"	font: 75 41pt \"Serif\";\n"
"\n"
"\n"
""));
        MainWindow->setDocumentMode(false);
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 660, 41, 21));
        pushButton->setStyleSheet(QStringLiteral(""));
        Magrib_2 = new QLabel(centralWidget);
        Magrib_2->setObjectName(QStringLiteral("Magrib_2"));
        Magrib_2->setGeometry(QRect(170, 130, 301, 61));
        Magrib_2->setStyleSheet(QLatin1String("color: rgb(239, 41, 41);\n"
"font: 75 33pt \"Al-Jazeera-Arabic\";"));
        Magrib_2->setAlignment(Qt::AlignCenter);
        Fajer = new QLabel(centralWidget);
        Fajer->setObjectName(QStringLiteral("Fajer"));
        Fajer->setGeometry(QRect(840, 10, 111, 62));
        Fajer->setStyleSheet(QLatin1String("color:rgb(239, 41, 41);\n"
"	font: 75 35pt \"Serif\";"));
        Shourq = new QLabel(centralWidget);
        Shourq->setObjectName(QStringLiteral("Shourq"));
        Shourq->setGeometry(QRect(840, 70, 111, 61));
        Shourq->setStyleSheet(QLatin1String("color:rgb(239, 41, 41);\n"
"	font: 75 35pt \"Serif\";"));
        Duhur = new QLabel(centralWidget);
        Duhur->setObjectName(QStringLiteral("Duhur"));
        Duhur->setGeometry(QRect(840, 140, 111, 61));
        Duhur->setStyleSheet(QLatin1String("color:rgb(239, 41, 41);\n"
"	font: 75 35pt \"Serif\";"));
        Asr = new QLabel(centralWidget);
        Asr->setObjectName(QStringLiteral("Asr"));
        Asr->setGeometry(QRect(840, 210, 111, 41));
        Asr->setStyleSheet(QLatin1String("color:rgb(239, 41, 41);\n"
"	font: 75 35pt \"Serif\";"));
        Magrib = new QLabel(centralWidget);
        Magrib->setObjectName(QStringLiteral("Magrib"));
        Magrib->setGeometry(QRect(840, 260, 111, 71));
        Magrib->setStyleSheet(QLatin1String("color:rgb(239, 41, 41);\n"
"	font: 75 35pt \"Serif\";"));
        Asha = new QLabel(centralWidget);
        Asha->setObjectName(QStringLiteral("Asha"));
        Asha->setGeometry(QRect(840, 340, 121, 51));
        Asha->setStyleSheet(QLatin1String("color:rgb(239, 41, 41);\n"
"	font: 75 35pt \"Serif\";"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(1010, 10, 81, 61));
        label_7->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 25pt \"Al-Jazeera-Arabic\";"));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(1020, 80, 81, 51));
        label_8->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 25pt \"Al-Jazeera-Arabic\";"));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(1010, 140, 91, 51));
        label_9->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 25pt \"Al-Jazeera-Arabic\";"));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(1020, 210, 81, 41));
        label_10->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 25pt \"Al-Jazeera-Arabic\";"));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(1000, 270, 101, 51));
        label_11->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 25pt \"Al-Jazeera-Arabic\";"));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(1000, 340, 101, 51));
        label_12->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 25pt \"Al-Jazeera-Arabic\";"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(660, 330, 111, 62));
        label_5->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 25pt \"Al-Jazeera-Arabic\";\n"
"\n"
""));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(680, 0, 111, 76));
        label_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 25pt \"Al-Jazeera-Arabic\";\n"
"\n"
""));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(660, 60, 141, 96));
        label_4->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 25pt \"Al-Jazeera-Arabic\";\n"
"\n"
""));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(660, 150, 121, 54));
        label_3->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 25pt \"Al-Jazeera-Arabic\";\n"
"\n"
""));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(680, 200, 101, 84));
        label->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 25pt \"Al-Jazeera-Arabic\";\n"
"\n"
""));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(650, 270, 131, 61));
        label_6->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 25pt \"Al-Jazeera-Arabic\";\n"
"\n"
""));
        min = new QLabel(centralWidget);
        min->setObjectName(QStringLiteral("min"));
        min->setGeometry(QRect(190, 10, 341, 121));
        QFont font;
        font.setFamily(QStringLiteral("Al-Jazeera-Arabic"));
        font.setPointSize(85);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        min->setFont(font);
        min->setStyleSheet(QLatin1String("font: 75 85pt \"Al-Jazeera-Arabic\";\n"
"color: rgb(239, 41, 41);\n"
""));
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(150, 180, 361, 61));
        label_16->setLayoutDirection(Qt::LeftToRight);
        label_16->setStyleSheet(QLatin1String("color: rgb(239, 41, 41);\n"
"font: 75 33pt \"Al-Jazeera-Arabic\";\n"
"center\n"
""));
        label_16->setTextFormat(Qt::AutoText);
        label_16->setAlignment(Qt::AlignCenter);
        label_13 = new DynamicFontSizeLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(100, 440, 881, 101));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy1);
        label_13->setMinimumSize(QSize(400, 50));
        QFont font1;
        font1.setFamily(QStringLiteral("Al-Jazeera-Arabic"));
        label_13->setFont(font1);
        label_13->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_13->setFrameShape(QFrame::NoFrame);
        label_13->setTextFormat(Qt::PlainText);
        label_13->setWordWrap(true);
        label_15 = new DynamicFontSizeLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(250, 540, 851, 91));
        sizePolicy1.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy1);
        label_15->setMinimumSize(QSize(400, 50));
        label_15->setFont(font1);
        label_15->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_15->setFrameShape(QFrame::NoFrame);
        label_15->setTextFormat(Qt::PlainText);
        label_15->setWordWrap(true);
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setEnabled(true);
        graphicsView->setGeometry(QRect(0, 0, 16777215, 16777215));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy2);
        graphicsView->setAutoFillBackground(false);
        graphicsView_2 = new QGraphicsView(centralWidget);
        graphicsView_2->setObjectName(QStringLiteral("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(150, 480, 171, 171));
        graphicsView_2->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/images/No-Mobile-Phone-Sign.jpg);"));
        graphicsView_2->setFrameShape(QFrame::NoFrame);
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(330, 480, 831, 201));
        label_14->setStyleSheet(QStringLiteral("font: 75 20pt \"Al-Jazeera-Arabic\";"));
        label_14->setTextFormat(Qt::RichText);
        label_14->setAlignment(Qt::AlignCenter);
        AqamaLabelCounter = new QLabel(centralWidget);
        AqamaLabelCounter->setObjectName(QStringLiteral("AqamaLabelCounter"));
        AqamaLabelCounter->setGeometry(QRect(810, 260, 361, 221));
        AqamaLabelCounter->setStyleSheet(QStringLiteral("font: 75 125pt \"Al-Jazeera-Arabic\";"));
        AqamaLabelCounter->setAlignment(Qt::AlignCenter);
        time_remain_en = new DynamicFontSizeLabel(centralWidget);
        time_remain_en->setObjectName(QStringLiteral("time_remain_en"));
        time_remain_en->setGeometry(QRect(570, 180, 621, 71));
        time_remain_en->setFont(font1);
        time_remain_en->setStyleSheet(QStringLiteral(""));
        time_remain_en->setTextFormat(Qt::RichText);
        time_remain_en->setAlignment(Qt::AlignCenter);
        time_value = new QLabel(centralWidget);
        time_value->setObjectName(QStringLiteral("time_value"));
        time_value->setGeometry(QRect(660, 310, 131, 101));
        time_value->setStyleSheet(QStringLiteral("font: 75 17pt \"Al-Jazeera-Arabic\";"));
        time_value->setTextFormat(Qt::RichText);
        time_value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        time_remain_ar = new QLabel(centralWidget);
        time_remain_ar->setObjectName(QStringLiteral("time_remain_ar"));
        time_remain_ar->setGeometry(QRect(580, 50, 591, 111));
        time_remain_ar->setStyleSheet(QStringLiteral("font: 75 30pt \"Al-Jazeera-Arabic\";"));
        time_remain_ar->setTextFormat(Qt::RichText);
        time_remain_ar->setAlignment(Qt::AlignCenter);
        event = new DynamicFontSizeLabel(centralWidget);
        event->setObjectName(QStringLiteral("event"));
        event->setGeometry(QRect(70, 320, 501, 111));
        event->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        MainWindow->setCentralWidget(centralWidget);
        label_13->raise();
        label_15->raise();
        label_4->raise();
        label_12->raise();
        label_11->raise();
        label_3->raise();
        label_9->raise();
        label_8->raise();
        label_10->raise();
        Magrib->raise();
        Asr->raise();
        Shourq->raise();
        Fajer->raise();
        Asha->raise();
        Duhur->raise();
        graphicsView->raise();
        pushButton->raise();
        graphicsView_2->raise();
        label_14->raise();
        AqamaLabelCounter->raise();
        time_remain_en->raise();
        time_value->raise();
        time_remain_ar->raise();
        label_6->raise();
        label_5->raise();
        label_2->raise();
        label->raise();
        label_7->raise();
        Magrib_2->raise();
        label_16->raise();
        min->raise();
        event->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Set", Q_NULLPTR));
        Magrib_2->setText(QApplication::translate("MainWindow", "Date", Q_NULLPTR));
        Fajer->setText(QApplication::translate("MainWindow", "00:00", Q_NULLPTR));
        Shourq->setText(QApplication::translate("MainWindow", "00:00", Q_NULLPTR));
        Duhur->setText(QApplication::translate("MainWindow", "00:00", Q_NULLPTR));
        Asr->setText(QApplication::translate("MainWindow", "00:00", Q_NULLPTR));
        Magrib->setText(QApplication::translate("MainWindow", "00:00", Q_NULLPTR));
        Asha->setText(QApplication::translate("MainWindow", "00:00", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\330\247\331\204\331\201\330\254\330\261", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\330\264\330\261\331\210\331\202", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "\330\247\331\204\330\270\331\207\330\261", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "\330\247\331\204\330\271\330\265\330\261", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "\330\247\331\204\331\205\330\272\330\261\330\250", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "\330\247\331\204\330\271\330\264\330\247\330\241", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Ishaa", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Fajer ", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Shrouq ", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Dhuhr ", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Asr ", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Magrib", Q_NULLPTR));
        min->setText(QApplication::translate("MainWindow", "00:00", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "\330\247\331\204\330\252\330\247\330\261\331\212\330\256 \330\247\331\204\331\207\330\254\330\261\331\212 ", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "\330\255\330\257\331\212\330\253 \330\247\331\204\331\212\331\210\331\205 \330\250\330\247\331\204\331\204\330\272\330\251 \330\247\331\204\330\271\330\261\330\250\331\212\330\251", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Hadith English", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\330\247\331\204\330\261\330\254\330\247\330\241 \331\210\330\266\330\271 \330\247\331\204\331\205\331\210\330\250\330\247\331\212\331\204 \330\271\331\204\331\211 \331\210\330\266\330\271\331\212\330\251 \330\247\331\204\330\265\330\247\331\205\330\252</p><p>Please Be Sure Cell Phones Are into Silent Mode</p></body></html>", Q_NULLPTR));
        AqamaLabelCounter->setText(QApplication::translate("MainWindow", "00", Q_NULLPTR));
        time_remain_en->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Time remain for Aqam</p></body></html>", Q_NULLPTR));
        time_value->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Minutes</p><p>\330\257\331\202\331\212\331\202\330\251</p></body></html>", Q_NULLPTR));
        time_remain_ar->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\330\247\331\204\331\210\331\202\330\252 \330\247\331\204\331\205\330\252\330\250\331\202\331\212 \331\204\330\245\331\202\330\247\331\205\330\251 \330\265\331\204\330\247\330\251 </p></body></html>", Q_NULLPTR));
        event->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
