#-------------------------------------------------
#
# Project created by QtCreator 2016-03-08T17:39:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = testQt-M7024
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    m7024.cpp

HEADERS  += mainwindow.h \
    m7024.h

FORMS    += mainwindow.ui

LIBS += -lmodbus
