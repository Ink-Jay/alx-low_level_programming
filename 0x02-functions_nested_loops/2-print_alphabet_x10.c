#include <stdio.h>

/**
  *print_alphabet_x10 - prints the alphabet ten times
  * Return: void
  */

void print_alphabet_x10(void)
{
char alph;
int i;
for (i = 0; i <= 9; i++)
{
for (alph = 'a'; alph <= 'z'; alph++)
{
putchar(alph);
}
putchar('\n');
}
}
