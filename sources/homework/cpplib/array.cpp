#include "array.h"
#include "iostream"

using namespace std;

int *Array::get_arr() const
{
    return ptn;
}

void Array::set_arr(int *value)
{
    ptn = value;
}

void Array::set_size(int size)
{
    this->size = size;
}

void Array::set_ptn(int * array2)
{
    ptn = array2;
}

void Array::set_item(const int i, const int item)
{
    ptn[i] = item;
}

Array::Array()
{
    size = 10;
    ptn = new int[size];
    for (int i = 0; i < size; i++)
        ptn[i] = 0;
}

Array::Array(int size)
{
    this->size = size;
    ptn = new int[this->size];
}

Array::Array(Array & array)
{
    size = array.get_size();
    ptn = new int [size];
    for (int i = 0; i < size; i++)
        ptn[i] = array[i];
}

void Array::copy(Array & array)
{
    delete [] ptn;
    size = array.get_size();
    ptn = new int [size];
    for (int i = 0; i < size; i++)
        ptn[i] = array[i];
}

int Array::operator[](int i) const
{
    return ptn[i];
}

Array::~Array()
{
    delete [] ptn;
}

int Array::get_size() const
{
    return size;
}

void Array::add_item(int newItem)
{
    Array arr2;
    arr2.copy(*this);

    delete [] ptn;
    size++;
    ptn = new int [size];

    for (int i = 0; i < size-1; i++)
        ptn[i] = arr2[i];
    ptn[size-1] = newItem;
}

