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
    void creating_without_parameter() const;
    void creating_with_fix_size() const;
    void creating_with_users_size() const;
    void creating_with_existing_array(ArrayApp &) const;
public:
    void demo() const;
};

#endif
