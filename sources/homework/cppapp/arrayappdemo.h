#ifndef ARRAYAPPDEMO_H
#define ARRAYAPPDEMO_H

#include "arrayapp.h"

using std::cin;
using std::cout;
using std::endl;

class ArrayAppDemo
{
private:
    void check_creating();
    void check_copy();
    void check_additem();
    void show_array() const;
public:
    void demo();
};

#endif
