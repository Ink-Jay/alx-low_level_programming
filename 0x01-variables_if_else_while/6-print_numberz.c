#include <stdio.h>

/**
 * main - prints single digit numbers
 * Return: 0 when succesfully executed
 */

int main(void)
{
int num;

for (num = '0'; num <= '9'; num++)
{
putchar(num);
}
putchar('\n');
return (0);
}
