#ifndef ARRAY_H
#define ARRAY_H

class Array
{
private:
    int size;
    int * ptn;

protected:
    void set_size(int);
    void set_ptn(int *);
    void set_item(const int, const int);

public:
    Array();
    Array(int);
    Array(Array &);
    int get_size() const;
    void copy(Array &);
    int operator[](int) const;
    void add_item(int);
    ~Array();
    int *get_arr() const;
    void set_arr(int *value);
};

#endif // ARRAY_H
