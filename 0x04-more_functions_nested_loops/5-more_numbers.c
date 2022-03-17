#include "main.h"
#include <stdio.h>

/**
  *more_numbers - prints numbers from 0-14 ten times
  * Return: void
  */
void more_numbers(void)
{
int j;
int i;
for (j = 0; j <= 10; j++)
{
for (i = 0; i <= 14; i++)
{
_putchar(i);
}
putchar('\n');
}
_putchar('\n');
return (0);

}
