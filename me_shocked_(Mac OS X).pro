#-------------------------------------------------
#
# Project created by QtCreator 2013-12-08T21:19:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = me_shocked
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    base.cpp \
    figure.cpp \
    shape.cpp \
    rectangle.cpp \
    qtrectangle.cpp \
    canvaswidget.cpp

HEADERS  += mainwindow.h \
    base.h \
    figure.h \
    shape.h \
    rectangle.h \
    qtshape.h \
    qtrectangle.h \
    canvaswidget.h

FORMS    += mainwindow.ui
