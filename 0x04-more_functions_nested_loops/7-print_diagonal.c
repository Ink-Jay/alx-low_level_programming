#include "main.h"
#include <stdio.h>

/**
  *print_diagonal - prints a diagonal according to specification
  *@n: specifies the number of _ to be printed
  * Return: void
  */
void print_diagonal(int n)
{
int i;
for (i = 0; i <= n; i++)
{
if ((i == 0) || (i < 0))
{
_putchar('\n');

}
else{
_putchar('\');
_putchar('\n');
}
}
return (0);
}
