#include <stdio.h>

/**
  *print_alphabet - prints the alphabet ten times
  * Return: void
  */

void print_alphabet_x10()
{
char alph;
int i;
for (i = 0; i <= 9; i++)
{
for (alph = 'a'; alph <= 'z'; alph++)
{
_putchar(alph);
}
_putchar('\n');
}
}
