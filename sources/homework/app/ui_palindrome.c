#include "main.h"
#include "palindrome.h"
#include "ui_palindrome.h"

void menu_palindrome()
{
    int num;
    puts("Definition of palindrome:");
    puts("1. Input a number");
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
            input_palindrome(); menu_palindrome(); break;
        case 2:
            help_palindrome(); menu_palindrome(); break;
        case 9:
            main_menu(); break;
        default:
            puts("Error! Invalid number.\n"); menu_palindrome(); break;
        }
    }
    else
    {
        puts("Error! Input a number.\n");
        __fpurge(stdin);
        menu_palindrome();
    }
}

void input_palindrome()
{
    char number[20];
    puts("Input a number:");
    scanf("%s", number);
    int is_palin = is_palindrome(number);
    show_palindrome(number, is_palin);
    printf("\n");
}

void show_palindrome(char * number, int is_palin)
{
    if (is_palin)
        printf("%s is palindrome\n", number);
    else
        printf("%s isn't palindrome\n", number);
}

void help_palindrome()
{
    puts("HELP: Проверить, является ли заданное число NUMBER палиндромом (симметричным, первая цифра равна последней и так далее).");
}
