/* #1.1: INCH TO CM
 * Пользователь задает длину отрезка в дюймах (например, 21 дюйм; 1 дюйм=2.54 см).
 * Вывести длину того же отрезка в метрах, сантиметрах и миллиметрах (например, 0 м 53 см 3.4 мм).
 */

/* #1.2: TIME
 * Путник двигался t1 часов со скоростью v1, затем t2 часов — со скоростью v2 и t3 часов — со скоростью v3..
 * Определить, за какое время он одолел первую половину пути?
 */

 /* #2: PALINDROM
  * Проверить, является ли заданное число палиндромом (симметричным, первая цифра равна
  * последней и так далее). Примеры: 1357531 > да; 208082 > нет.
  */

/* #3: CIRCLE GAME
 * По кругу располагаются n человек. Ведущий считает по кругу, начиная с первого, и
 * выводит m-го человека. Круг смыкается, счет возобновляется со следующего; так
 * продолжается, пока в круге не останется только один человек. Найти номер этого
 * человека.
 */

#include "main.h"

int main(int argc, char* argv[])
{
    if (argc > 1)
    {
        if (strcmp(argv[1], "--interactive") == 0 || strcmp(argv[1], "--menu") == 0 || strcmp(argv[1], "-m") == 0)
            main_menu();
        if (strcmp(argv[1], "--help") == 0 || strcmp(argv[1], "-h") == 0)
            help();
        if (strcmp(argv[1], "--inch_to_cm") == 0 || strcmp(argv[1], "-i") == 0)
        {
            if (argc > 2)
            {
                Meters meter;
                int inches = atoi(argv[2]);
                calculating_inch_to_cm(inches, &meter);
                show_inch_to_cm(inches, meter);
            }
            else
            puts("Type --help (-h) for usage.");
        }
        if (strcmp(argv[1], "--time") == 0 || strcmp(argv[1], "-t") == 0)
        {
            if (argc > 7)
            {
                double velocity[NUMBER_OF_PIECES];
                double time[NUMBER_OF_PIECES];
                int i;
                for(i = 0; i < 3; i++)
                {
                    time[i] = atoi(argv[2+2*i]); // 2, 4, 6 args
                    velocity[i] = atoi(argv[3+2*i]); // 3, 5, 7 args
                }
                double total_time = calculating_time(velocity, time);
                show_time(total_time);
            }
            else
            puts("Type --help (-h) for usage.");
        }
        if (strcmp(argv[1], "--palindrome") == 0 || strcmp(argv[1], "-p") == 0)
        {
            if (argc > 2)
            {
                int is_palian = is_palindrome(argv[2]);
                show_palindrome(argv[2], is_palian);
            }
            else
            puts("Type --help (-h) for usage.");
        }
        if (strcmp(argv[1], "--circle_game") == 0 || strcmp(argv[1], "-c") == 0)
        {
            if (argc > 3)
            {
                int winner = determine_the_winner(atoi(argv[2]), atoi(argv[3]));
                show_circle_game(winner);
            }
            else
            puts("Type --help (-h) for usage.");
        }
    }
    else
        puts("Type --help (-h) for usage.");
    return 0;
}
