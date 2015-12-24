#include "number.h"

string Number::intToString(int num)
{
    ostringstream temp;
    temp << num;
    return temp.str();
}

Number::Number(int num)
{
    this->num = intToString(num);
}

Number::Number(string num)
{
    this->num = num;
}

bool Number::isPalindrome() const
{
    int halflen = num.length() / 2;
    for (int i = 0; i < halflen; i++)
        if (num[i] != num[num.length()-1-i])
            return false;
    return true;
}
