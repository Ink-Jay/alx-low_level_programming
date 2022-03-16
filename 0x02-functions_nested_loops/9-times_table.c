#include "main.h"
#include <stdio.h>

/**
  * times_table - prints a times table
  * Return: void
  */
void times_table(void)
{
int row;
int col;
int product;
for (row = 0; row <= 9; row ++)
{
for (col =0; col <= 9; col ++)
{
product = row * col;
if (product > 9)
{
_putchar((product / 10) + '0');
_putchar((product % 10) + '0');
}
else
{
_putchar(' ');
_putchar(product + '0');
}
if (col != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
