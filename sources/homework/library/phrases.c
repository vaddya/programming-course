#include "phrases.h"

void upper_case_phrases(char * str)
{
    int i;
    str[0] = toupper(str[0]);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '.')
        {
            int beginingOfSentence = i+1;
            if (str[i+1] == ' ')
                beginingOfSentence++;
            str[beginingOfSentence] = toupper(str[beginingOfSentence]);
        }
    }
}
