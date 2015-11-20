#include "array.h"
#include "iostream"

using namespace std;

void Array::SetSize(int size)
{
    /// можно так (и в других подобных местах)
    this->size = size;
}

void Array::SetArr(int * array)
{
    arr = array;
}

/// здесь и i и item можно отменить const (и в других подобных местах)
void Array::SetItem(const int i, const int item)
{
    arr[i] = item;
}

/// может быть по умолчанию создавать не совсем пустой массив?
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

/// Назовите array2 просто array и используйте this->
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

int Array::GetSize() const
{
    return size;
}

void Array::AddItem(int newItem)
{

    /// меня путает в одном методе и Array arr2 и int* arr
    /// Не используйте цифру в конце, а используйте this->
    /// и может быть переименовать внутренний массив, чтобы меньше путать с названием класса?
    ///
    /// Пока я не понимаю, что тут происходит :)
    Array arr2;
    arr2.Copy(*this);

    delete [] arr;
    size++;
    arr = new int [size];

    for (int i = 0; i < size-1; i++)
        arr[i] = arr2[i];
    arr[size-1] = newItem;
}

