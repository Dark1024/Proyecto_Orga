#-------------------------------------------------
#
# Project created by QtCreator 2013-08-13T06:53:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Proyecto
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ventanacrearcampos.cpp \
    adtfile.cpp \
    campo.cpp \
    adtrecordfile.cpp

HEADERS  += mainwindow.h \
    ventanacrearcampos.h \
    ventanalistacampos.h \
    adtfile.h \
    campo.h \
    adtrecordfile.h

FORMS    += mainwindow.ui \
    ventanacrearcampos.ui
