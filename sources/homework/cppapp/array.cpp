#include "array.h"
#include "iostream"

using namespace std;

Array::Array()
{
    size = 0;
    arr = NULL;
}

Array::Array(int sz)
{
    size = sz;
    arr = new int[size];
}

Array::Array(Array & array2)
{
    size = array2.GetSize();
    arr = new int [size];
    for (int i = 0; i < size; i++)
        arr[i] = array2[i];
}

void Array::Copy(Array & array2)
{
    delete [] arr;
    size = array2.GetSize();
    arr = new int [size];
    for (int i = 0; i < size; i++)
        arr[i] = array2[i];
}

int Array::operator[](int i) const
{
    return arr[i];
}

Array::~Array()
{
    delete [] arr;
}

void Array::EnterArray()
{
    for (int i = 0; i < size; i++)
    {
        cout << "#" << i+1 << " ";
        cin >> arr[i];
    }
}

void Array::EnterArray(int sz)
{
    delete [] arr;
    size = sz;
    arr = new int [size];
    for (int i = 0; i < size; i++)
    {
        cout << "#" << i+1 << " ";
        cin >> arr[i];
    }
}

int Array::GetSize() const
{
    return size;
}

void Array::AddItem(int newItem)
{
    Array arr2;
    arr2.Copy(*this);

    delete [] arr;
    size++;
    arr = new int [size];

    for (int i = 0; i < size-1; i++)
        arr[i] = arr2[i];
    arr[size-1] = newItem;
}

