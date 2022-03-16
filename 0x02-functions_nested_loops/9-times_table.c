
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
putchar((product / 10) + '0');
putchar((product % 10) + '0');
}
else
{
putchar('');
putchar(product + '0');
}
if (col != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
}
