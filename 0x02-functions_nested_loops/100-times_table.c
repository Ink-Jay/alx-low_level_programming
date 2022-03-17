#include "main.h"
#include <stdio.h>

/**
  * print_times_table - prints a times table
  * @n: table to be created
  * Return: void
  */
void print_times_table(int n)
{
int row;
int col;
int product;

if((n <=15) && (n >= 0))
{
for (row = 0; row <= n; row++)
{
for (col = 0; col <= n; col++)
{
product = row * col;
if (product < 10 && col > 0)
{
printf(" ");
}
else if (product < 100 && col > 0)
{
printf(" ");
}
printf("%d", product);

if (col < n)
{
printf(", ");
}
}
printf("\n");
}
