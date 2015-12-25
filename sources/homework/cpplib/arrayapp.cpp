#include "arrayapp.h"

ArrayApp::ArrayApp(int size): array(new Array(size)) {}

void ArrayApp::setSize(int size)
{
    if (array->getSize() == size)
        return;
    delete array;
    try {
        array = new Array(size);
    }
    catch (OutOfRange& e) {
        cout << e.getNum() <<  " invalid size!" << endl;
        terminate();
    }
}

ArrayApp::~ArrayApp()
{
    delete array;
}

istream & operator>>(istream & is, ArrayApp & app)
{
    int item;
    for (int i = 0; i < app.array->getSize(); i++) {
        cout << "#" << i+1 << " ";
        is >> item;
        is.clear();
        if (is.get() != '\n') {
            cout << "#" << i+1 << " invalid input, #" << i+1 << " = 0" << endl;
            continue;
        }
        try {
            app.array->setItem(i, item);
        }
        catch (OutOfRange& e) {
            cout << "#" << e.getNum() <<  " out of range" << endl;
            continue;
        }
    }
    return is;
}

ostream & operator<<(ostream & os, ArrayApp & arrayapp)
{
    int item;
    os << "Size = " << arrayapp.array->getSize() << ": [ ";
    for (int i = 0; i < arrayapp.array->getSize(); i++) {
        item = arrayapp.array->operator[](i);
        os << item << " ";
    }
    os << "]" << endl;
    return os;
}
