#ifndef ARRAYAPPDEMO_H
#define ARRAYAPPDEMO_H

#include "arrayapp.h"

using std::cin;
using std::cout;
using std::endl;

class ArrayAppDemo : public ArrayApp
{
private:
    void ShowArray() const;
public:
    void Demo();
};

#endif // ARRAYAPPDEMO_H
