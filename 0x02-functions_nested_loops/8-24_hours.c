
#include <stdio.h>

/**
  * jack_bauer - prints the number of hours in a day
  * Return: void
  */
void jack_bauer(void)
{
int min, hour;

for (hour = 0; hour <=23 ; hour++)
{
for (min = 0; min <= 59; min++)
{
putchar((hour / 10) + '0');
putchar((hour % 10) + '0');
putchar(':');
putchar((min /10) + '0');
putchar((min % 10) + '0');
putchar('\n');
}
}
}
