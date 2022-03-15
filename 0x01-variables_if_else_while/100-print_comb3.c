#include <stdio.h>

/**
 * main - prints all combinations of two digit numbers
 * Return: 0 when succesfully executed
 */

int main(void)
{
int j, k;

for (j = 48; j <= 56; j++)
{
for (k = 49; k <= 57; k++)
{
if (k > j)
{
putchar(k);
putchar(j);
if (j != 56 || k!= 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
