#include <stdio.h>

/**
 * main - print the alphabet in reverse
 * Return: 0 when succesfully executed
 */

int main(void)
{
char alph;

for (alph = 'z'; alph <= 'a'; alph--)
{
putchar(alph);
}
putchar('\n');
return (0);
}
