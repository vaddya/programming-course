#ifndef PHRASES_H
#define PHRASES_H

#include "string"

using std::string;
/**
  @brief Представление фраз в тексте

  Проверить, что все фразы в тексте начинаются с прописной буквы и при необходимости откорректировать текст.
*/
class Phrases
{
private:
    string str;
public:
    /**
     * @brief Конструктор
     * @param text текст, в котором необходимо проверить, начинаются ли фразы с прописной буквы
     */
    Phrases(const string text);
    /**
     * @brief Метод, исправляющий в тексте фразы
     *
     * Ожидается, что текст задан
     */
    void upper_case_phrases();
    /**
     * @brief Метод, запрашивающий текст
     * @return текст в формате string
     */
    string getStr() const { return str; }
};

#endif // PHRASES_H
