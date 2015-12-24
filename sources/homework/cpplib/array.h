#ifndef ARRAY_H
#define ARRAY_H
#include <exception>

class Array
{
private:
    int size;
    int * ptn;
public:
    Array(int size = 10);
    Array(Array &);
    int getSize() const;
    void setItem(const int, const int);
    void operator=(Array &);
    int operator[](int) const;
    ~Array();
};

class OutOfRange: public std::exception
{
public:
    OutOfRange(int index): num(index) {}
    int getNum() const {
        return num;
    }
private:
    int num;
};

#endif // ARRAY_H
