#ifndef NUMBER_H
#define NUMBER_H

/* #2: PALINDROM
 * Проверить, является ли заданное число NUMBER палиндромом (симметричным, первая цифра равна последней и так далее).
 */

#include "string"
#include "sstream"

using std::string;
using std::ostringstream;

class Number
{
private:
    string num;
    string intToString(const int);
public:
    Number(const int);
    Number(const string);
    bool isPalindrome() const;
    string getNum() const { return num; }
};

#endif // NUMBER_H
