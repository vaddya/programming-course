#ifndef CIRCLEGAME_H
#define CIRCLEGAME_H

#include <vector>
using std::vector;
/**
  @brief Круговая игра

  По кругу располагаются num_of_players человек. Ведущий считает по кругу, начиная с первого, и выводит num_for_kick-го человека.
  Круг смыкается, счет возобновляется со следующего. Так  продолжается, пока в круге не останется только один человек. Найти номер этого человека.
  */
class CircleGame
{
private:
    int players;
    int kicking;
public:
    /**
     * @brief Конструктор
     * @param num_of_players количество игроков, учавствующих в игре
     * @param num_for_kick номер человека, которого выводят из игры
     */
    CircleGame(const int num_of_players, const int num_for_kick);
    /**
     * @brief Установить значение поля players, равное количеству игроков
     * @param num_of_players новое количество игроков, учавствующих в игре
     */
    void setPlayers(const int num_of_players);
    /**
     * @brief Установить значение поля kicking, равное номеру человека, которого выводят
     * @param num_for_kick новый номер человека, которого выводят из игры
     */
    void setKicking(const int num_for_kick);
    /**
     * @brief Определить победителя
     *
     * Данная функция высчитывает номер игрока-победителя. Ожидается что значения players и kicking известны.
     * @return Номер победившего игрока
     */
    int determineWinner() const;
};

#endif // CIRCLEGAME_H
