#ifndef ARRAY_H
#define ARRAY_H

class Array
{
private:
    int size;
    int * ptn;

protected:
    void SetSize(int);
    void SetArr(int *);
    void SetItem(const int, const int);

public:
    Array();
    Array(int);
    Array(Array &);
    int GetSize() const;
    void Copy(Array &);
    int operator[](int) const;
    void AddItem(int);
    ~Array();
    int *getArr() const;
    void setArr(int *value);
};

#endif // ARRAY_H
