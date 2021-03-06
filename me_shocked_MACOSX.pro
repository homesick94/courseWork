#-------------------------------------------------
#
# Project created by QtCreator 2013-12-08T21:19:37
#
#-------------------------------------------------

QT       += core gui
QT       += xml

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
    canvaswidget.cpp \
    qtparallelogram.cpp \
    parallelogram.cpp \
    qsvgparser.cpp \
    qtrhombus.cpp \
    svgstyleparse.cpp \
    svgfigureparser.cpp \
    svgparser.cpp \
    colordialogbutton.cpp \
    qcolorpalletewidget.cpp \
    zigzag.cpp \
    qtzigzag.cpp \
    arrow.cpp \
    qtarrow.cpp \
    qimageradiobutton.cpp

HEADERS  += mainwindow.h \
    base.h \
    figure.h \
    shape.h \
    rectangle.h \
    qtshape.h \
    qtrectangle.h \
    canvaswidget.h \
    qtparallelogram.h \
    parallelogram.h \
    qsvgparser.h \
    qtrhombus.h \
    svgstyleparse.h \
    svgfigureparser.h \
    svgparser.h \
    QtShapeHeaders.h \
    colordialogbutton.h \
    qcolorpalletewidget.h \
    zigzag.h \
    qtzigzag.h \
    arrow.h \
    qtarrow.h \
    qimageradiobutton.h

FORMS    += mainwindow.ui \
    qcolorpalletewidget.ui

OTHER_FILES +=

RESOURCES += \
    images.qrc
