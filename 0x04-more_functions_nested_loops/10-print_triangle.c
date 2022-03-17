#include "main.h"
#include <stdio.h>

/**
  *print_triangle - prints a triangle according to specification
  *@size: specifies the size of triangle to be printed
  * Return: void
  */
void print_triangle(int size)
{
int i;
int j;

if (size <= 0)
{
_putchar('\n');
}
for (i = 0; i <= size; i++)
{
for (j = 0; i <= size; j++)
{
_putchar(' ');
}
for (j = 0; i <= i; j++)
{
_putchar('#');
}
_putchar('\n');
return (0);
}
}
