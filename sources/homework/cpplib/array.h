#ifndef ARRAY_H
#define ARRAY_H

class Array
{
private:
    int size;
    int * ptn;
public:
    Array();
    Array(int);
    Array(Array &);
    int get_size() const;
    void set_size(int);
    void set_ptn(int *);
    void set_item(const int, const int);
    void copy(Array &);
    int operator[](int) const;
    void add_item(int);
    ~Array();
};

#endif // ARRAY_H
