#-------------------------------------------------
#
# Project created by QtCreator 2018-04-02T16:12:34
#
#-------------------------------------------------

TEMPLATE = app
TARGET = datebase
DEPENDPATH += .
INCLUDEPATH += .
QT += core gui
QT += sql
QT += webkitwidgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
# Input
CONFIG += c++11

QT += widgets
DEFINES += QT_DEPRECATED_WARNINGS
HEADERS +=\
        mainwindow.h \
    src/dynamicfontsizelabel.h \
    src/dynamicfontsizepushbutton.h \
    settings.h
FORMS += mainwindow.ui \
    settings.ui
SOURCES += \
        main.cpp \
        mainwindow.cpp \
    src/dynamicfontsizelabel.cpp \
    src/dynamicfontsizepushbutton.cpp \
    settings.cpp
RESOURCES += \
    resources.qrc


