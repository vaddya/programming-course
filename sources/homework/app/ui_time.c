#include "ui.h"
#include "time.h"
#include "ui_time.h"

void menu_time()
{
    int num;
    puts("Calculation time of half way:");
    puts("1. Input velocity and time");
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
            input_time(); menu_time(); break;
        case 2:
            help_time(); menu_time(); break;
        case 9:
            main_menu(); break;
        default:
            puts("Error! Invalid number.\n"); menu_time(); break;
        }
    }
    else
    {
        puts("Error! Input a number.\n");
        __fpurge(stdin);
        main_menu();
    }
}

void input_time()
{
    double velocity[NUMBER_OF_PIECES];
    double time[NUMBER_OF_PIECES];
    puts("Input velocity and time:");
    int i;
    for (i = 0; i < NUMBER_OF_PIECES ; i++)
    {
        printf("V[%d] = ", i+1);
        scanf("%lf", &velocity[i]);
        printf("T[%d] = ", i+1);
        scanf("%lf", &time[i]);
    }
    double total_time = calculating_time(velocity, time);
    show_time(total_time);
    printf("\n");
}

void show_time(double time)
{
    printf("Required time is %.2f hours.\n", time);
}

void help_time()
{
    puts("HELP: Определить, за какое время путник одолел первую половину пути, двигаясь T1 часов со скоростью V1, T2 часов со скоростью V2, T3 часов со скоростью V3.");
}
