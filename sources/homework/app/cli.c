#include "cli.h"

int attempt_parameter(char* full_name, char* short_name, char* actual_name, int number_of_args_expected, int number_of_args_actual)
{
    if (strcmp(actual_name, full_name) == 0 || strcmp(actual_name, short_name) == 0)
    {
        if (number_of_args_actual > number_of_args_expected)
            return(1);
        else
            return(-1);
    }
    return (0);
}

int cli_inch_to_cm(int argc, char* argv[])
{
    if (attempt_parameter("--inch_to_cm", "-i", argv[1], 2, argc))
    {
        if ((attempt_parameter("--inch_to_cm", "-i", argv[1], 2, argc)) == -1)
        {
            puts("Not enough arguments! Type --help (-h) for usage.");
            return 1;
        }
        Meters meter;
        int inches = atoi(argv[2]);
        calculating_inch_to_cm(inches, &meter);
        show_inch_to_cm(inches, meter);
        return 1;
    }
    return 0;
}

int cli_time(int argc, char* argv[])
{
    if (attempt_parameter("--time", "-t", argv[1], 7, argc))
    {
        if ((attempt_parameter("--time", "-t", argv[1], 7, argc)) == -1)
        {
            puts("Not enough arguments! Type --help (-h) for usage.");
            return 1;
        }
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
        return 1;
    }
    return 0;
}

int cli_palindrome(int argc, char* argv[])
{
    if (attempt_parameter("--palindrome", "-p", argv[1], 2, argc))
    {
        if ((attempt_parameter("--palindrome", "-p", argv[1], 2, argc)) == -1)
        {
            puts("Not enough arguments! Type --help (-h) for usage.");
            return 1;
        }
        int is_palin = is_palindrome(argv[2]);
        show_palindrome(argv[2], is_palin);
        return 1;
    }
    return 0;
}

int cli_circle_game(int argc, char* argv[])
{
    if (attempt_parameter("--circle_game", "-c", argv[1], 3, argc))
    {
        if ((attempt_parameter("--circle_game", "-c", argv[1], 3, argc)) == -1)
        {
            puts("Not enough arguments! Type --help (-h) for usage.");
            return 1;
        }
        int winner = determine_the_winner(atoi(argv[2]), atoi(argv[3]));
        show_circle_game(winner);
        return 1;
    }
    return 0;
}

int cli_phrases(int argc, char* argv[])
{
    if (argc == 3) argc++;
    if (attempt_parameter("--upper_phrases", "-u", argv[1], 3, argc))
    {
        if ((attempt_parameter("--upper_phrases", "-u", argv[1], 3, argc)) == -1)
        {
            puts("Not enough arguments! Type --help (-h) for usage.");
            return 1;
        }
        char str[100];
        FILE * read;

        if ((read = fopen(argv[2], "r")) == NULL)
        {
            puts("Error! Cannot open input file. Input interrupted.\n");
        }
        else
        {
            fgets(str, 99, read);
            fclose(read);
            char o_filename[20] = "output";
            if (argc > 4)
                strcpy(o_filename, argv[3]);
            FILE * write = fopen(o_filename, "w");
            if (write == NULL)
            {
                 puts("Error! Cannot open output file. Input interrupted.\n");
            }
            else
            {
                upper_case_phrases(str);
                fprintf(write, "%s", str);
                fclose(write);
                printf("Check result in %s\n", o_filename);
            }
        }
        return 1;
    }
    return 0;
}
