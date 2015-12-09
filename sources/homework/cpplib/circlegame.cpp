#include "circlegame.h"

CircleGame::CircleGame(int players, int kicking)
{
    this->players = players;
    this->kicking = kicking;
}

void CircleGame::set_players(int players)
{
    this->players = players;
}

void CircleGame::set_kicking(int kicking)
{
    this->kicking = kicking;
}

int CircleGame::determine_the_winner() const
{
    int * is_player_in_game;
    is_player_in_game = new int[players];
    int i;
    for (i = 0; i < players; i++)
    {
        is_player_in_game[i] = 1;
    }
    for (int cursor = 0, i = 0; i < players-1; i++) // проиграть должны players-1 игроков
    {
        for (int j = 0; j < kicking-1; cursor++) // считаем подряд kicking-1 игроков, остающихся в игре
            if (is_player_in_game[cursor % players])
                j++;

        while (!is_player_in_game[cursor % players]) // ищем следующего kicking игрока, который пока в игре
            cursor++;

        is_player_in_game[cursor % players] = 0; // kicking игрок объявляется проигравшим
        cursor += 1;
    }
    for(i = 0; is_player_in_game[i]==0 && i < players; i++);
    delete [] is_player_in_game;
    return i + 1;
}
