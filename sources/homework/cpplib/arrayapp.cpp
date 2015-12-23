#include "arrayapp.h"

ArrayApp::ArrayApp(int size)
{
    array = new Array(size);
}

void ArrayApp::enter_array()
{
    int item;
    for (int i = 0; i < array->get_size(); i++)
    {
        cout << "#" << i+1 << " ";
        try {
            cin >> item;
            cin.clear();
            if(cin.get() != '\n')
                throw InvalidInput(i+1);
        }
        ///
        catch (InvalidInput& e)
        {
            cout << "#" << e.get_num() << " invalid input, #" << e.get_num() << " = 0" << endl;
            continue;
        }

        try {
            array->set_item(i, item);
        }
        catch (OutOfRange& e) {
            cout << "#" << e.get_num() <<  " out of range" << endl;
            continue;
        }
    }
}

void ArrayApp::enter_array(int size)
{
    delete array;
    try {
        array = new Array(size);
    }
    catch (OutOfRange& e) {
        cout << e.get_num() <<  " invalid size!" << endl;
        terminate();
    }

    int item;
    for (int i = 0; i < size; i++)
    {
        cout << "#" << i+1 << " ";
        try {
            cin >> item;
            cin.clear();
            if(cin.get() != '\n')
                throw InvalidInput(i+1);
        }
        catch (InvalidInput& e)
        {
            cout << "#" << e.get_num() << " invalid input, #" << e.get_num() << " = 0" << endl;
            continue;
        }

        try {
            array->set_item(i, item);
        }
        catch (OutOfRange& e) {
            cout << "#" << e.get_num() <<  " out of range" << endl;
            continue;
        }
    }
}

void ArrayApp::show_array() const
{
    int item;
    cout << "Size = " << array->get_size() << ": [ ";
    for (int i = 0; i < array->get_size(); i++)
    {
        item = array->operator[](i);
        cout << item << " ";
    }
    cout << "]" << endl;
}

ArrayApp::~ArrayApp()
{
    delete array;
}
