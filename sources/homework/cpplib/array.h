#ifndef ARRAY_H
#define ARRAY_H

class Array
{
private:
    int size;
    int * ptn;
public:
    Array();
    Array(int);
    Array(Array &);
    int get_size() const;

    /// Зачем этот метод? Пусть Аrray сам заботится о своем размере.
    /// В общем, этот метод дискуссионный
    void set_size(int);
    /// Проявите же уважение в нему, насильно ставить ему пойнтер -- это переходит всякие границы!!!
    void set_ptn(int *);


    void set_item(const int, const int);

    /// давайте это переделаем в перегрузку оператора присваивания
    void copy(Array &);
    int operator[](int) const;

    /// Мне кажется, что для массива не очень уместен медод добавления в конец, это актуально для списков,
    /// но может быть только кажется...
    /// уберем??
    void add_item(int);
    ~Array();
};

#endif // ARRAY_H
