#include "ui.h"

void main_menu()
{
    int num;
    puts("Main menu. Choose a task:");
    puts("1. Translate inches to meters");
    puts("2. Calculation time of half way");
    puts("3. Definition of palindrome");
    puts("4. Play the circle game");
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
    puts("\t--help (-h) - Вызов вспомогательной информации");
    puts("\t--interactive (--menu, -m) - Вызов главного меню");
    puts("\t--inch_to_cm (-i) INCHES - Перевести длину отрезка из дюймов в метры, сантиметры и миллиметры");
    puts("\t--time (-t) T1 V1 T2 V2 T3 V3 - Определить, за какое время путник одолел первую половину пути, двигаясь T1 часов со скоростью V1, T2 часов со скоростью V2, T3 часов со скоростью V3");
    puts("\t--palindrome (-p) NUMBER - Проверить, является ли заданное число NUMBER палиндромом (симметричным, первая цифра равна последней и так далее)");
    puts("\t--circle_game (-c) NUM_OF_PLAYERS NUM_FOR_KICK - По кругу располагаются NUM_OF_PLAYERS человек. Ведущий считает по кругу, начиная с первого, и выводит NUM_FOR_KICK-го человека. Круг смыкается, счет возобновляется со следующего; так  продолжается, пока в круге не останется только один человек. Найти номер этого человека");
}
