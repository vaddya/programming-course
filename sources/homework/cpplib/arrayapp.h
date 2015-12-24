#ifndef ARRAYAPP_H
#define ARRAYAPP_H
#include "array.h"
#include "iostream"

using std::cout;
using std::cin;
using std::endl;
using std::terminate;

class ArrayApp
{
private:
    Array * array;
public:
    ArrayApp(int size = 10);
    void enterArray();
    void enterArray(const int);
    void showArray() const;
    ~ArrayApp();
};

class InvalidInput: public std::exception
{
public:
    InvalidInput(int index): num(index) {}
    int getNum() const {
        return num;
    }
private:
    int num;
};

#endif // ARRAYAPP_H
