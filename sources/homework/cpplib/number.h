#ifndef NUMBER_H
#define NUMBER_H

/* #2: PALINDROM
 * Проверить, является ли заданное число NUMBER палиндромом (симметричным, первая цифра равна последней и так далее).
 */

#include "string"
#include "sstream"
using namespace std;


/// Где консты?
class Number
{
private:
    string num;
    string int_to_string(int);
public:
    Number(int);
    Number(string);
    bool is_palindrome();
    string get_num();
};

#endif // NUMBER_H
