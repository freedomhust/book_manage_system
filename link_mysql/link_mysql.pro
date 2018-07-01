#-------------------------------------------------
#
# Project created by QtCreator 2016-04-03T16:38:55
#
#-------------------------------------------------

QT    += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Database
TEMPLATE = app

QTPLUGIN += QSQLMYSQL

SOURCES += main.cpp\
        database.cpp

HEADERS  += database.h

#INCLUDEPATH += "/usr/include/mysql"

#LIBS += ""
