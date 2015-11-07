#ifndef CIRCLE_GAME
#define CIRCLE_GAME

#include "stdlib.h"

#ifdef __cplusplus
extern "C" {
#endif

void menu_circle_game();
int determine_the_winner(int, int);
void input_console_circle_game();
void input_file_circle_game();
void show_circle_game(int);
void automatic_circle_game();
void help_circle_game();

#ifdef __cplusplus
}
#endif

#endif // CIRCLE_GAME
