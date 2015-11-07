#include "ui.h"
#include "circle_game.h"
#include "ui_circle_game.h"

void menu_circle_game()
{
    int num;
    puts("Circle game:");
    puts("1. Input numbers from console");
    puts("2. Input numbers from files");
    puts("3. Help");
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
            input_console_circle_game(); menu_circle_game(); break;
        case 2:
            input_file_circle_game(); menu_circle_game(); break;
        case 3:
            help_circle_game(); menu_circle_game(); break;
        case 9:
            main_menu(); break;
        default:
            puts("Error! Invalid number.\n"); menu_circle_game(); break;
        }
    }
    else
    {
        puts("Error! Input a number.\n");
        __fpurge(stdin);
        menu_circle_game();
    }
}

void input_console_circle_game()
{
    int n, m;
    printf("Input the number of players: ");
    scanf("%d", &n);
    printf("Input the parameter selection: ");
    scanf("%d", &m);
    int winner = determine_the_winner(n, m);
    show_circle_game(winner);
    printf("\n");
}

void input_file_circle_game()
{
    int n, m;
    printf("Write the input file (0 for \"input\"): ");
    char i_filename[20];
    scanf("%s", i_filename);
    if (i_filename[0] == '0')
        strcpy(i_filename, "input");
    FILE * read;

    if ((read = fopen(i_filename, "r"))==NULL)
    {
        puts("Error! Cannot open input file. Input interrupted.\n");
        menu_circle_game();
    }

    fscanf(read, "%d %d", &n, &m);
    fclose(read);

    int winner = determine_the_winner(n, m);

    printf("Write the output file (0 for \"output\"): ");
    char o_filename[20];
    scanf("%s", o_filename);
    if (o_filename[0] == '0')
        strcpy(o_filename, "output");

    FILE * write = fopen(o_filename, "w");
     if (write == NULL)
     {
         puts("Error! Cannot open output file. Input interrupted.\n");
         menu_circle_game();
    }
    fprintf(write, "#%d won this game", winner);
    fclose(write);
    printf("Check result in %s\n\n", o_filename);
}

void show_circle_game(int winner)
{
    printf("#%d won this game!\n", winner);
}

void help_circle_game()
{
    puts("HELP: По кругу располагаются NUM_OF_PLAYERS человек. Ведущий считает по кругу, начиная с первого, и выводит NUM_FOR_KICK-го человека. Круг смыкается, счет возобновляется со следующего; так  продолжается, пока в круге не останется только один человек. Найти номер этого человека.");
}
