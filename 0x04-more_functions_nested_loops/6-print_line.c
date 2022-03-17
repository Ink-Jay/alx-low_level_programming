#include "main.h"
#include <stdio.h>

/**
  *print_line - prints a line according to specification
  *@n: specifies the number of _ to be printed
  * Return: void
  */
void print_line(int n)
{
int i;
for (i = 0; i <= n; i++)
{
if ((i == 0) || (i < 0))
{
_putchar('\n');
}
else{
putchar('_');
}
}
_putchar('\n');
return (0);
}
