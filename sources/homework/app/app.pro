TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c \
    ui.c \
    ui_circle_game.c \
    ui_inch_to_cm.c \
    ui_palindrome.c \
    ui_time.c


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

HEADERS += \
    ui_time.h \
    ui_palindrome.h \
    ui_inch_to_cm.h \
    ui_circle_game.h \
    main.h
