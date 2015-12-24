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
    void creatingWithoutParameter() const;
    void creatingWithFixSize() const;
    void creatingWithUserSize() const;
    void creatingWithExistingArray(ArrayApp &) const;
public:
    void demo() const;
};

#endif
