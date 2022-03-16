#include "main.h"
#include <stdio.h>
/**
  * print_last_digit - prints the last digit of a number
  * @n: number to check
  * Return: last digit of n
  */
int print_last_digit(int n)
{
int lastDigit;
if ( n < 0)
{
n = -1 * n ;
}
lastDigit = n % 10;
_putchar(lastDigit + '0');
return (lastDigit);
}
