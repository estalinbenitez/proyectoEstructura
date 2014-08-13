#-------------------------------------------------
#
# Project created by QtCreator 2014-08-10T08:11:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = editor
TEMPLATE = app


SOURCES += main.cpp\
        texteditor.cpp \
    dialog.cpp

HEADERS  += texteditor.h \
    dialog.h

FORMS    += texteditor.ui \
    dialog.ui
