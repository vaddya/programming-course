#ifndef ARRAYAPPDEMO_H
#define ARRAYAPPDEMO_H

#include "arrayapp.h"

using std::cin;
using std::cout;
using std::endl;
using std::exception;

class ArrayAppDemo
{
private:
     /// Где реализации?? Если не нужны, можно удалить
    void check_creating();
    void check_copy();
    void check_additem();
    /// Почему только этот const, а остальные нет?
    void show_array() const;
public:
    void demo();
};

#endif
