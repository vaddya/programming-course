#-------------------------------------------------
#
# Project created by QtCreator 2015-10-22T14:51:57
#
#-------------------------------------------------

QT       += testlib

QT       -= gui

TARGET = tst_testtest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += tst_testtest.cpp
DEFINES += SRCDIR=\\\"$$PWD/\\\"

HEADERS +=

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../library/release/ -llibrary
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../library/debug/ -llibrary
else:unix: LIBS += -L$$OUT_PWD/../library/ -llibrary

INCLUDEPATH += $$PWD/../library
DEPENDPATH += $$PWD/../library

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../library/release/liblibrary.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../library/debug/liblibrary.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../library/release/library.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../library/debug/library.lib
else:unix: PRE_TARGETDEPS += $$OUT_PWD/../library/liblibrary.a
