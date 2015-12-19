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
    int get_size() const;
    void set_item(const int, const int);
    void operator=(Array &);
    int operator[](int) const;
    ~Array();
};

class OutOfRange: public std::exception
{
public:
    OutOfRange(int index): num(index) {}
    int get_num() const {
        return num;
    }
private:
    int num;
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

#endif // ARRAY_H
