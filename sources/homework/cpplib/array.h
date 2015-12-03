#ifndef ARRAY_H
#define ARRAY_H

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

#endif // ARRAY_H
