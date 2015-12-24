#include "phrases.h"

Phrases::Phrases(string str): str(str) {}

void Phrases::upper_case_phrases()
{
    str[0] = toupper(str[0]);
    for (unsigned i = 0; i < str.length(); i++) {
        if (str[i] == '.') {
            int beginingOfSentence = i+1;
            if (str[i+1] == ' ')
                beginingOfSentence++;
            str[beginingOfSentence] = toupper(str[beginingOfSentence]);
        }
    }
}
