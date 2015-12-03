TEMPLATE = subdirs

app.depends = library
test.depends = library
#Нужно дописать зависимости для cpp*

SUBDIRS += \
    library \
    app \
    test \
    cpplib \
    cppapp \
    cpptest
