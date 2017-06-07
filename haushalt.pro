#-------------------------------------------------
#
# Project created by QtCreator 2017-06-06T12:31:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = haushalt
TEMPLATE = app


SOURCES += main.cpp\
        benutzerwindow.cpp \
    login.cpp \
    systemstart.cpp

HEADERS  += benutzerwindow.h \
    login.h \
    systemstart.h

FORMS    += benutzerwindow.ui \
    login.ui \
    systemstart.ui

QMAKE_CXXFLAGS += -std=c++11
