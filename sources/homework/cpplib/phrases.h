#ifndef PHRASES_H
#define PHRASES_H

/* #4: PHRASES
 * Проверить, что все фразы в тексте  начинаются с прописной буквы и при необходимости откорректировать текст.
 */

#include "string"
using namespace std;

class Phrases
{
private:
    string str;
public:
    Phrases(string);
    string get_str();
    void upper_case_phrases();
};

#endif // PHRASES_H
