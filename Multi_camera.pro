#-------------------------------------------------
#
# Project created by QtCreator 2016-04-19T20:52:29
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Multi_camera
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    qimagemat.cpp

HEADERS  += dialog.h \
    qimagemat.h

FORMS    += dialog.ui

RC_FILE +=rcfile.rc
INCLUDEPATH +=/usr/include/\
/usr/include/opencv\
/usr/include/opencv2\

LIBS+=/usr/lib/x86_64-linux-gnu/libopencv_*.so\
