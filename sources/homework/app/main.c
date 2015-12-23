/* #1.1: INCH TO CM
 * Перевести длину отрезка из дюймов в метры, сантиметры и миллиметры.
 */

/* #1.2: TIME
 * Определить, за какое время путник одолел первую половину пути, двигаясь T1 часов со скоростью V1, T2 часов со скоростью V2, T3 часов со скоростью V3.
 */

/* #2: PALINDROM
 * Проверить, является ли заданное число NUMBER палиндромом (симметричным, первая цифра равна последней и так далее).
 */

/* #3: CIRCLE GAME
 * По кругу располагаются NUM_OF_PLAYERS человек. Ведущий считает по кругу, начиная с первого, и выводит NUM_FOR_KICK-го человека.
 * Круг смыкается, счет возобновляется со следующего; так  продолжается, пока в круге не останется только один человек. Найти номер этого человека.
 */

/* #4: PHRASES
 * Проверить, что все фразы в тексте  начинаются с прописной буквы и при необходимости откорректировать текст.
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
        if (cli_phrases(argc, argv)) is_used++;
        if (!is_used)
            printf("Unknown subcommand '%s'! Type --help (-h) for usage.\n", argv[1]);

    }
    else
        puts("Type --help (-h) for usage.");
    return 0;
}
