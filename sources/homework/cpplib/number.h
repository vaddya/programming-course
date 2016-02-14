#ifndef NUMBER_H
#define NUMBER_H

#include "string"
#include "sstream"

using std::string;
using std::ostringstream;
/**
  @brief Число-палиндром

  Проверить, является ли заданное число NUMBER палиндромом (симметричным, первая цифра равна последней и так далее).
*/
class Number
{
private:
    string num;
    string intToString(const int);
public:
    /**
     * @brief Конструктор, получающий число
     * @param int_num число в целом формате, которое нужно проверить на палиндром
     */
    Number(const int int_num);
    /**
     * @brief Конструктор, получающий строку
     * @param str_num число в строковом формате, которое нужно проверить на палиндром
     */
    Number(const string str_num);
    /**
     * @brief Метод, определяющий, является ли число палиндромом
     *
     * Ожидается, что число задано
     * @return true - если число является палиндромом, false - если число таковым не является
     */
    bool isPalindrome() const;
    /**
     * @brief Метод, запрашивающий число в строковом формате
     * @return число в строковом формате
     */
    string getNum() const { return num; }

};

#endif // NUMBER_H
