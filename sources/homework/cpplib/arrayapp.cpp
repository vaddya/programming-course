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
        cin >> item;
        array->set_item(i, item);
    }
}

void ArrayApp::enter_array(int size)
{
    delete array;
    array = new Array(size);
    int item;
    for (int i = 0; i < size; i++)
    {
        cout << "#" << i+1 << " ";
        cin >> item;
        array->set_item(i, item);
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
