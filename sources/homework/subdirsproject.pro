TEMPLATE = subdirs

app.depends = library
test.depends = library
#Нужно дописать зависимости для cpp*

SUBDIRS += \
    app \
    library \
    test \
    cpplib \
    cppapp \
    cpptest
