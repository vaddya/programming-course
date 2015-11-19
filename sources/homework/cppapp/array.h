#ifndef ARRAY_H
#define ARRAY_H

class Array
{
private:
    int size;
    int * arr;
public:
    Array();
    Array(int);
    Array(Array &);
    void Copy(Array &);
    int operator[](int) const;
    ~Array();

    void EnterArray();
    void EnterArray(int);
    int GetSize() const;
    void AddItem(int);
};

#endif // ARRAY_H
