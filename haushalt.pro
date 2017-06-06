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
    erster_systemstart.cpp

HEADERS  += benutzerwindow.h \
    erster_systemstart.h \
    login.h

FORMS    += benutzerwindow.ui \
    login.ui \
    erster_systemstart.ui
