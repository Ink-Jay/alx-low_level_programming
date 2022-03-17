
#include <stdio.h>

/**
  * main - prints the sum of fibonacci series of numbers below 40000 and even
  * Return: 0 when executed succesfully
  */
int main(void)
{
long int a = 1;
long int b = 2;
long int c;
long int sum = 0;
while (a < 4000000)
{
if (a % 2 == 0)
{
sum = sum + a;
}
c = a + b;
a = b;
b = c;
}
printf("%d\n", sum);

return (0);
}
