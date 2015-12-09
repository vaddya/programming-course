TEMPLATE = subdirs

app.depends = library
test.depends = library
cppapp.depends = cpplib
cpptest.depends = cpplib

SUBDIRS += \
    library \
    app \
    test \
    cpplib \
    cppapp \
    cpptest
