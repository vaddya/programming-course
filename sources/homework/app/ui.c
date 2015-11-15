#include "ui.h"
#include "ui_phrases.h"

void main_menu()
{
    int num;
    puts("Main menu. Choose a task:");
    puts("1. Translate inches to meters");
    puts("2. Calculation time of half way");
    puts("3. Definition of palindrome");
    puts("4. Play the circle game");
    puts("5. Inspection of phrases");
    puts("0. Exit");
    printf(">>> ");
    if (scanf("%d", &num) == 1)
    {
        switch (num)
        {
        case 0:
            break;
        case 1:
            menu_inch_to_cm(); break;
        case 2:
            menu_time(); break;
        case 3:
            menu_palindrome(); break;
        case 4:
            menu_circle_game(); break;
        case 5:
            menu_phrases(); break;
        default:
            puts("Error! Invalid number.\n"); main_menu(); break;
        }
    }
    else
    {
        puts("Error! Input a number.\n");
        __fpurge(stdin);
        main_menu();
    }
}

void help()
{
    puts("Subdirs Project. Dyachkov Vadim");
    puts("Available subcommands: ");
    puts("  --help (-h) - Вызов вспомогательной информации");
    puts("  --interactive (--menu, -m) - Вызов главного меню");
    puts("  --inch_to_cm (-i) <inches> - Перевести длину отрезка из дюймов в метры, сантиметры и миллиметры");
    puts("  --time (-t) <t1> <v1> <t2> <v2> <t3> <v3> - Определить, за какое время путник одолел первую половину пути, двигаясь t1 часов со скоростью v1, t2 часов со скоростью v2, t3 часов со скоростью v3");
    puts("  --palindrome (-p) <number> - Проверить, является ли заданное число number палиндромом (симметричным, первая цифра равна последней и так далее)");
    puts("  --circle_game (-c) <num_of_players> <num_for_kick> - По кругу располагаются num_of_players человек. Ведущий считает по кругу, начиная с первого, и выводит num_for_kick человека. Круг смыкается, счет возобновляется со следующего; так  продолжается, пока в круге не останется только один человек. Найти номер этого человека");
    puts("  --upper_phrases (-u) <input_file> [output_file] - Проверить, что все фразы в тексте  начинаются с прописной буквы и при необходимости откорректировать текст");
}
