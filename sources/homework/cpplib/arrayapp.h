#ifndef ARRAYAPP_H
#define ARRAYAPP_H
#include "array.h"
#include "iostream"

using namespace std;

class ArrayApp : public Array
{
public:
    void enter_array();
    void enter_array(int);
};

#endif // ARRAYAPP_H
