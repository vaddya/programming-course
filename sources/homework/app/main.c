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

#include "ui.h"
#include "cli.h"

int main(int argc, char* argv[])
{
    if (argc > 1)
    {
        int is_used = 0;
        if (attempt_parameter("--interactive", "-m", argv[1], 1, argc))
        {
            main_menu();
            is_used++;
        }
        if (attempt_parameter("--help", "-h", argv[1], 1, argc))
        {
            help();
            is_used++;
        }
        if (cli_inch_to_cm(argc, argv)) is_used++;
        if (cli_time(argc, argv)) is_used++;
        if (cli_palindrome(argc, argv)) is_used++;
        if (cli_circle_game(argc, argv)) is_used++;
        if (!is_used)
            printf("Unknown subcommand '%s'! Type --help (-h) for usage.\n", argv[1]);

    }
    else
        puts("Type --help (-h) for usage.");
    return 0;
}
