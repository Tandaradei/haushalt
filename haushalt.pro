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
    firststartwindow.cpp \
    maincontroller.cpp \
    startcontroller.cpp \
    usercontroller.cpp \
    admincontroller.cpp \
    startdao.cpp \
    userdao.cpp \
    admindao.cpp

HEADERS  += \
    dbmanager.h \
    userwindow.h \
    loginwindow.h \
    firststartwindow.h \
    maincontroller.h \
    startcontroller.h \
    usercontroller.h \
    admincontroller.h \
    startdao.h \
    userdao.h \
    admindao.h \
    user.h \
    transaction.h \
    category.h \
    paymethod.h \
    stanpayMethod.h

FORMS    += \
    userwindow.ui \
    loginwindow.ui \
    firststartwindow.ui

QMAKE_CXXFLAGS += -std=c++11
