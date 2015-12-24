#ifndef CIRCLEGAME_H
#define CIRCLEGAME_H

/* #3: CIRCLE GAME
 * По кругу располагаются NUM_OF_PLAYERS человек. Ведущий считает по кругу, начиная с первого, и выводит NUM_FOR_KICK-го человека.
 * Круг смыкается, счет возобновляется со следующего; так  продолжается, пока в круге не останется только один человек. Найти номер этого человека.
 */

#include <vector>
using std::vector;

class CircleGame
{
private:
    int players;
    int kicking;
public:
    CircleGame(const int, const int);
    void setPlayers(const int);
    void setKicking(const int);
    int determineWinner() const;
};

#endif // CIRCLEGAME_H
