#-------------------------------------------------
#
# Project created by QtCreator 2015-11-20T13:17:15
#
#-------------------------------------------------

QT       += testlib

QT       -= gui

TARGET = tst_cpptesttest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += tst_cpptesttest.cpp
DEFINES += SRCDIR=\\\"$$PWD/\\\"

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../cpplib/release/ -lcpplib
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../cpplib/debug/ -lcpplib
else:unix: LIBS += -L$$OUT_PWD/../cpplib/ -lcpplib

INCLUDEPATH += $$PWD/../cpplib
DEPENDPATH += $$PWD/../cpplib

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../cpplib/release/libcpplib.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../cpplib/debug/libcpplib.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../cpplib/release/cpplib.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../cpplib/debug/cpplib.lib
else:unix: PRE_TARGETDEPS += $$OUT_PWD/../cpplib/libcpplib.a
