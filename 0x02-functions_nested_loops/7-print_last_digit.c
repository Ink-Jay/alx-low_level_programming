#include "main.h"
/**
  * print_last_digit - prints the last digit of a number
  * @n: number to check
  * Return: last digit of n
  */
int print_last_digit(int n)
{
int lastDigit;
int absValue;
_abs(n);
lastDigit = absValue % 10;
_putchar(lastDigit + '0');
return (lastDigit);
}
