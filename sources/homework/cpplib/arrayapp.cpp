#include "arrayapp.h"

ArrayApp::ArrayApp(int size): array(new Array(size)) {}

void ArrayApp::enterArray()
{
    int item;
    for (int i = 0; i < array->getSize(); i++) {
        cout << "#" << i+1 << " ";
        cin >> item;
        cin.clear();
        if (cin.get() != '\n') {
            cout << "#" << i+1 << " invalid input, #" << i+1 << " = 0" << endl;
            continue;
        }
        try {
            array->setItem(i, item);
        }
        catch (OutOfRange& e) {
            cout << "#" << e.getNum() <<  " out of range" << endl;
            continue;
        }
    }
}

void ArrayApp::enterArray(int size)
{
    if (array->getSize() != size) {
        delete array;
        try {
            array = new Array(size);
        }
        catch (OutOfRange& e) {
            cout << e.getNum() <<  " invalid size!" << endl;
            terminate();
        }
    }

    int item;
    for (int i = 0; i < size; i++) {
        cout << "#" << i+1 << " ";
        cin >> item;
        cin.clear();
        if (cin.get() != '\n') {
            cout << "#" << i+1 << " invalid input, #" << i+1 << " = 0" << endl;
            array->setItem(i, 0);
            continue;
        }
        try {
            array->setItem(i, item);
        }
        catch (OutOfRange& e) {
            cout << "#" << e.getNum() <<  " out of range" << endl;
            continue;
        }
    }
}

void ArrayApp::showArray() const
{
    int item;
    cout << "Size = " << array->getSize() << ": [ ";
    for (int i = 0; i < array->getSize(); i++) {
        item = array->operator[](i);
        cout << item << " ";
    }
    cout << "]" << endl;
}

ArrayApp::~ArrayApp()
{
    delete array;
}
