#include <stdio.h>

/**
  * main - prints the alphabet in lowercase and uppercase
  * Return: 0 when succesfully executrd
  */

int main(void)
{
char alph;

for (alph = 'a'; alph <= 'z'; alph++)
{
{
if (alph != 'q' && alph != 'e')
{
putchar(alph);
}
}
putchar('\n');
return (0);
}
