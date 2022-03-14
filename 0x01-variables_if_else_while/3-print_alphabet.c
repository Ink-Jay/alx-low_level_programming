#include <stdio.h>

/**
 * main - prints the alphabet in lower case then uppercase
 * Return: 0 when succesfully executed
 */

int main(void)
{
char alph;

for (alph = 'a'; alph <= 'z'; alph++)
{
putchar(alph);
}
for (alph = 'A'; ALPH <= 'Z'; alph++)
{
putchar(alph);
}
putchar('\n');
return (0);
}
