#-------------------------------------------------
#
# Project created by QtCreator 2018-04-28T11:49:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Calculator
TEMPLATE = app


SOURCES += main.cpp\
        calculatorview.cpp \
    model.cpp

HEADERS  += calculatorview.h \
    model.h

FORMS    += calculatorview.ui
