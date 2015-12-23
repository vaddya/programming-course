#ifndef NUMBER_H
#define NUMBER_H

/* #2: PALINDROM
 * Проверить, является ли заданное число NUMBER палиндромом (симметричным, первая цифра равна последней и так далее).
 */

#include "string"
#include "sstream"
using namespace std;

class Number
{
private:
    string num;
    string int_to_string(const int);
public:
    Number(const int);
    Number(const string);
    bool is_palindrome() const;
    string get_num() const;
};

#endif // NUMBER_H
