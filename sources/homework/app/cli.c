#include "cli.h"

int attempt_parameter(char* full_name, char* short_name, char* actual_name, int number_of_args_expected, int number_of_args_actual){
    if (strcmp(actual_name, full_name) == 0 || strcmp(actual_name, short_name) == 0)
    {
        if (number_of_args_actual > number_of_args_expected)
        {
            return(1);
        }
        else{
            puts("Type --help (-h) for usage.");
            return(0);
        }
    }
    return (0);
}

int cli_inch_to_cm(int argc, char* argv[])
{
    if(attempt_parameter("--inch_to_cm", "-i", argv[1], 2, argc)){
            Meters meter;
            int inches = atoi(argv[2]);
            calculating_inch_to_cm(inches, &meter);
            show_inch_to_cm(inches, meter);
            return 1;
    }
    return 0;
}
