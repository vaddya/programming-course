#include "circle_game.h"

int determine_the_winner(int number_of_players, int number_for_kick)
{
    int * is_player_in_game;
    is_player_in_game = (int *) malloc(sizeof(int) * number_of_players);
    int i;
    for (i = 0; i < number_of_players; i++)
    {
        is_player_in_game[i] = 1;
    }
    int j, cursor = 0;

    for (i = 0; i < number_of_players-1; i++) // проиграть должны number_of_players-1 игроков
    {
        for (j = 0; j < number_for_kick-1; cursor++) // считаем подряд number_for_kick-1 игроков, остающихся в игре
            if (is_player_in_game[cursor % number_of_players])
                j++;

        while (is_player_in_game[cursor % number_of_players] == 0) // ищем следующего number_for_kick игрока, который пока в игре
            cursor++;

        is_player_in_game[cursor % number_of_players] = 0; // number_for_kick игрок объявляется проигравшим
        cursor += 1;
    }
    for(i = 0; is_player_in_game[i]==0 && i < number_of_players; i++);
    free(is_player_in_game);
    return i + 1;
}




