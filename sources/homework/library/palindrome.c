#include "palindrome.h"

int is_palindrome(char * number)
{
    int flag = 1;
    int len = strlen(number);
    int halflen = len / 2;

    int i = 0;
    for (i = 0; i < halflen; i++)
        if (number[i] != number[len - i - 1])
        {
            flag = 0;
            break;
        }
    return(flag);
}
