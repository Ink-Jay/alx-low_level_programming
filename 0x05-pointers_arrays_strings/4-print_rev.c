#include "main.h"

/**
 *print_rev - prints string in reverse
 * @s: pointer to string
 * Return: void
 */
void print_rev(char *s)
{
int i;
int length;
int count = 0;

while (s[count] != '\0')
{
count++;
}
length = count;

for (i = length - 1 ; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
