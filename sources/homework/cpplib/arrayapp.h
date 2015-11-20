#ifndef ARRAYAPP_H
#define ARRAYAPP_H
#include "array.h"
#include "iostream"

class ArrayApp : public Array
{
public:
    void ShowArray() const;
    void EnterArray();
    void EnterArray(int);
};

#endif // ARRAYAPP_H
