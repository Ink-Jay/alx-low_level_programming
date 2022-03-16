
#include <stdio.h>

/**
  * print_sign - prints the sign of a number
  * @n: number to check 
  * Return: 1 if positive, 0 if zero and -1 if negative
  */
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
else if (n < 0)
{
putchar('-');
return (-1);
}
else 
{
putchar('0');
return (0);
}
}