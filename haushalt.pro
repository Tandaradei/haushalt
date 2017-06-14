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
    dbmanager.cpp \
    userwindow.cpp \
    loginwindow.cpp \
    firststartwindow.cpp

HEADERS  += \
    dbmanager.h \
    userwindow.h \
    loginwindow.h \
    firststartwindow.h

FORMS    += \
    userwindow.ui \
    loginwindow.ui \
    firststartwindow.ui

QMAKE_CXXFLAGS += -std=c++11
