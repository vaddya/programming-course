#include "ui.h"
#include "inch_to_cm.h"
#include "ui_inch_to_cm.h"

void menu_inch_to_cm()
{
    int num;
    puts("Translate inches to meters:");
    puts("1. Input inches");
    puts("2. Help");
    puts("9. Back to main menu");
    puts("0. Exit");
    printf(">>> ");
    if (scanf("%d", &num) == 1)
    {
        switch (num)
        {
        case 0:
            break;
        case 1:
            input_inch_to_cm(); menu_inch_to_cm(); break;
        case 2:
            help_inch_to_cm(); menu_inch_to_cm(); break;
        case 9:
            main_menu(); break;
        default:
            puts("Error! Invalid number.\n"); menu_inch_to_cm(); break;
        }
    }
    else
    {
        puts("Error! Input a number.\n");
        __fpurge(stdin);
        menu_inch_to_cm();
    }
}

void input_inch_to_cm()
{
    int inches;
    Meters meter;
    printf("Input inches: ");
    scanf("%d", &inches);
    calculating_inch_to_cm(inches, &meter);
    show_inch_to_cm(inches, meter);
    printf("\n");
}

void show_inch_to_cm(int inches, Meters meter)
{
    printf("%d inches = %d m %d cm %.1f mm\n", inches, meter.m, meter.cm, meter.mm);
}

void help_inch_to_cm()
{
    puts("HELP: Перевести длину отрезка из дюймов в метры, сантиметры и миллиметры.");
}
