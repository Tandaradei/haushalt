#-------------------------------------------------
#
# Project created by QtCreator 2017-06-06T12:31:50
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = haushalt
TEMPLATE = app


SOURCES += main.cpp\
    systemstart.cpp \
    dbmanager.cpp \
    userwindow.cpp \
    loginwindow.cpp

HEADERS  += \
    systemstart.h \
    dbmanager.h \
    userwindow.h \
    loginwindow.h

FORMS    += \
    login.ui \
    systemstart.ui \
    userwindow.ui

QMAKE_CXXFLAGS += -std=c++11
