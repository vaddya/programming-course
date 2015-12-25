#ifndef ARRAYAPP_H
#define ARRAYAPP_H
#include "array.h"
#include "iostream"

using std::cout;
using std::cin;
using std::endl;
using std::terminate;
using std::ostream;
using std::istream;

class ArrayApp
{
private:
    Array * array;
public:
    ArrayApp(int size = 10);
    void setSize(int);
    ~ArrayApp();

    friend istream & operator>>(istream &, ArrayApp &);
    friend ostream & operator<<(ostream &, ArrayApp &);
};

#endif // ARRAYAPP_H
