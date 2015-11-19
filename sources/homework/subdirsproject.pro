TEMPLATE = subdirs

app.depends = library
test.depends = library

SUBDIRS += \
    app \
    library \
    test \
    cppapp
