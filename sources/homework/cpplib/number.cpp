#include "number.h"

string Number::int_to_string(int num)
{
    ostringstream temp;
    temp << num;
    return temp.str();
}

Number::Number(int num)
{
    this->num = int_to_string(num);
}

Number::Number(string num)
{
    this->num = num;
}

bool Number::is_palindrome()
{
    int halflen = num.length() / 2;
    for (int i = 0; i < halflen; i++)
        if (num[i] != num[num.length()-1-i])
            return false;
    return true;
}

string Number::get_num()
{
    return num;
}
