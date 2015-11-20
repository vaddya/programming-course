#-------------------------------------------------
#
# Project created by QtCreator 2015-11-20T13:11:26
#
#-------------------------------------------------

QT       -= core gui

TARGET = cpplib
TEMPLATE = lib
CONFIG += staticlib

SOURCES += \
    array.cpp \
    arrayapp.cpp

HEADERS += \
    array.h \
    arrayapp.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
