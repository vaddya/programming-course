#include "array.h"
#include "iostream"

Array::Array(int size)
{
    if (size < 0)
        throw OutOfRange(size);
    else
    {
        this->size = size;
        ptn = new int[this->size];
        for (int i = 0; i < this->size; i++)
            ptn[i] = 0;
    }
}

Array::Array(Array & array)
{
    size = array.getSize();
    ptn = new int [size];
    for (int i = 0; i < size; i++)
        ptn[i] = array[i];
}

int Array::getSize() const
{
    return size;
}

void Array::setItem(const int i, const int item)
{
    if (i < 0 || i >= size)
        throw OutOfRange(i);
    else
        ptn[i] = item;
}

void Array::operator=(Array & array)
{
    delete [] ptn;
    size = array.getSize();
    ptn = new int [size];
    for (int i = 0; i < size; i++)
        ptn[i] = array[i];
}

int Array::operator[](int i) const
{
    if (i < 0 || i >= size)
        throw OutOfRange(i);
    else
        return ptn[i];
}

Array::~Array()
{
    delete [] ptn;
}
