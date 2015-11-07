#-------------------------------------------------
#
# Project created by QtCreator 2015-10-22T14:49:33
#
#-------------------------------------------------

QT       -= core gui

TARGET = library
TEMPLATE = lib
CONFIG += staticlib

SOURCES += \
    circle_game.c \
    inch_to_cm.c \
    palindrome.c \
    time.c

HEADERS += \
    circle_game.h \
    palindrome.h \
    time.h \
    inch_to_cm.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
