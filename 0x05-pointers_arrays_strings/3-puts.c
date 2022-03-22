#include "main.h"

/**
 * _puts - prints a string
 * @s: pointer tostring
 * Return: void
 */
void _puts(char *str)
{
while
(*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
