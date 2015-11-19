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
    void Copy(Array &);
    int GetItem(int);
    ~Array();

    void EnterArray();
    void EnterArray(int);
    void ShowArray();
    int GetSize();
    void AddItem(int);
};

#endif // ARRAY_H
