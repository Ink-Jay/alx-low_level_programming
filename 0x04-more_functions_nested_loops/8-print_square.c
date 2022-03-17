#include "main.h"
#include <stdio.h>

/**
  *print_square - prints a square according to specification
  *@size: specifies the size of square to be printed
  * Return: void
  */
void print_square(int size)
{
int i;
int j;

if (size <= 0)
{
_putchar('\n');
}
for (i = 0; i <= size; i++)
{
for (j = 0; 0 <= size; j++)
{
_putchar('#');
}
_putchar('\n');
}
return (0);
}
