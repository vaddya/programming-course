#ifndef PALINDROME
#define PALINDROME

#ifdef __cplusplus
extern "C" {
#endif

#include "string.h"

void menu_palindrome();
void input_palindrome();
int is_palindrome(char *);
void show_palindrome(char *, int);
void automatic_palindrome();
void help_palindrome();

#ifdef __cplusplus
}
#endif

#endif // PALINDROME
