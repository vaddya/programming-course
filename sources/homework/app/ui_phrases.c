#include "ui.h"
#include "phrases.h"
#include "ui_phrases.h"

void menu_phrases()
{
    int num;
    puts("Inspection of phrases:");
    puts("1. Input text from console");
    puts("2. Input text from files");
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
            input_console_phrases(); menu_phrases(); break;
        case 2:
            input_file_phrases(); menu_phrases(); break;
        case 3:
            help_phrases(); menu_phrases(); break;
        case 9:
            main_menu(); break;
        default:
            puts("Error! Invalid number.\n"); menu_phrases(); break;
        }
    }
    else
    {
        puts("Error! Input a number.\n");
        __fpurge(stdin);
        menu_phrases();
    }
}

void input_console_phrases()
{
    char str[100];
    puts("Input the text: ");
    scanf("%*c");
    gets(str);
    upper_case_phrases(str);
    show_phrases(str);
    printf("\n");
}

void input_file_phrases()
{
    char str[100];
    printf("Write the input file (0 for \"input\"): ");
    char i_filename[20];
    scanf("%s", i_filename);
    if (i_filename[0] == '0')
        strcpy(i_filename, "input");
    FILE * read;

    if ((read = fopen(i_filename, "r")) == NULL)
    {
        puts("Error! Cannot open input file. Input interrupted.\n");
        menu_circle_game();
    }
    else
    {
        fgets(str, 99, read);
        fclose(read);

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
        else
        {
            upper_case_phrases(str);
            fprintf(write, "%s", str);
            fclose(write);
            printf("Check result in %s\n\n", o_filename);
        }
    }
}

void show_phrases(char * str)
{
    printf("%s", str);
}

void help_phrases()
{
    puts("HELP: Проверить, что все фразы в тексте  начинаются с прописной буквы и при необходимости откорректировать текст.");
}
