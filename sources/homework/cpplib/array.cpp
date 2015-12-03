#include "array.h"
#include "iostream"

Array::Array(int size)
{
    this->size = size;
    ptn = new int[this->size];
    for (int i = 0; i < this->size; i++)
        ptn[i] = 0;
}

Array::Array(Array & array)
{
    size = array.get_size();
    ptn = new int [size];
    for (int i = 0; i < size; i++)
        ptn[i] = array[i];
}

int Array::get_size() const
{
    return size;
}

void Array::set_item(const int i, const int item)
{
    ptn[i] = item;
}

void Array::operator=(Array & array)
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
