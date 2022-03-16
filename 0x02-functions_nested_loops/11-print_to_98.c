#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - prints all natural numbers betwwen n and 98
  * Return: vod
  */
void print_to_98(int n)
{
if (n < 98)
{
for (; n <= 98; n++)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
}
}
else if (n > 98)
{
for (; n >= 98; n--)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
}
}
else
{
printf("%d", n);
}
printf("\n");
}
