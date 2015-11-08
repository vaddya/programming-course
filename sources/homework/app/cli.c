#include "cli.h"

int attempt_parameter(char* full_name, char* short_name, char* actual_name, int number_of_args_expected, int number_of_args_actual)
{
    if (strcmp(actual_name, full_name) == 0 || strcmp(actual_name, short_name) == 0)
    {
        if (number_of_args_actual > number_of_args_expected)
        {
            return(1);
        }
        else
        {
            puts("Not enough arguments! Type --help (-h) for usage.");
            return(0);
        }
    }
    return (0);
}

int cli_inch_to_cm(int argc, char* argv[])
{
    if (attempt_parameter("--inch_to_cm", "-i", argv[1], 2, argc))
    {
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
        int winner = determine_the_winner(atoi(argv[2]), atoi(argv[3]));
        show_circle_game(winner);
        return 1;
    }
    return 0;
}
