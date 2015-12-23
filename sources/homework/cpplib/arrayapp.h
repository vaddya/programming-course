#ifndef ARRAYAPP_H
#define ARRAYAPP_H
#include "array.h"
#include "iostream"
using namespace std;

class ArrayApp
{
private:
    Array * array;
public:
    ArrayApp(int size = 10);
    void enter_array();
    void enter_array(const int);
    void show_array() const;
    ~ArrayApp();
};

class InvalidInput: public std::exception
{
public:
    InvalidInput(int index): num(index) {}
    int get_num() const {
        return num;
    }
private:
    int num;
};

#endif // ARRAYAPP_H
