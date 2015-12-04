#ifndef TEMP
#define TEMP

/* #1.1: INCH TO CM
 * Перевести длину отрезка из дюймов в метры, сантиметры и миллиметры.
 */

class Segment
{
    private:
        int inches;
    public:
        Meters inches_to_meter();
};

/* #1.2: TIME
 * Определить, за какое время путник одолел первую половину пути, двигаясь T1 часов со скоростью V1, T2 часов со скоростью V2, T3 часов со скоростью V3.
 */

class Route
{
    private:
        double * velocity;
        double * time;
    public:
        double distance();
        double time_of_half_way();
};

/* #2: PALINDROM
 * Проверить, является ли заданное число NUMBER палиндромом (симметричным, первая цифра равна последней и так далее).
 */

class Number
{
    private:
        char * num;
    public:
        int is_palindrome();
};

/* #3: CIRCLE GAME
 * По кругу располагаются NUM_OF_PLAYERS человек. Ведущий считает по кругу, начиная с первого, и выводит NUM_FOR_KICK-го человека.
 * Круг смыкается, счет возобновляется со следующего; так  продолжается, пока в круге не останется только один человек. Найти номер этого человека.
 */

class CircleGame
{
    private:
        int players;
        int kicking;
    public:
        int determine_the_winner();
};

/* #4: PHRASES
 * Проверить, что все фразы в тексте  начинаются с прописной буквы и при необходимости откорректировать текст.
 */

class Phrases
{
    private:
        char * str;
    public:
        void upper_case_phrases();
};

#endif // TEMP

