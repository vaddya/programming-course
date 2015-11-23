#include "array.h"
#include "iostream"

using namespace std;

int *Array::getArr() const
{
    return ptn;
}

void Array::setArr(int *value)
{
    ptn = value;
}

void Array::SetSize(int size)
{
    this->size = size;
}

void Array::SetArr(int * array2)
{
    ptn = array2;
}

void Array::SetItem(const int i, const int item)
{
    ptn[i] = item;
}

/// может быть по умолчанию создавать не совсем пустой массив?
Array::Array()
{
    size = 0;
    ptn = NULL;
}

Array::Array(int size)
{
    this->size = size;
    ptn = new int[this->size];
}

Array::Array(Array & array)
{
    size = array.GetSize();
    ptn = new int [size];
    for (int i = 0; i < size; i++)
        ptn[i] = array[i];
}

void Array::Copy(Array & array)
{
    delete [] ptn;
    size = array.GetSize();
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

int Array::GetSize() const
{
    return size;
}

void Array::AddItem(int newItem)
{
    Array arr2;
    arr2.Copy(*this);

    delete [] ptn;
    size++;
    ptn = new int [size];

    for (int i = 0; i < size-1; i++)
        ptn[i] = arr2[i];
    ptn[size-1] = newItem;
}

