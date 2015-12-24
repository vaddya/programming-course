#ifndef PHRASES_H
#define PHRASES_H

/* #4: PHRASES
 * Проверить, что все фразы в тексте  начинаются с прописной буквы и при необходимости откорректировать текст.
 */

#include "string"

using std::string;

class Phrases
{
private:
    string str;
public:
    Phrases(const string);
    void upper_case_phrases();
    string getStr() const { return str; }
};

#endif // PHRASES_H
