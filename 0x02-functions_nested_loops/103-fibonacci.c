
#include <stdio.h>

/**
  * main - prints the sum of fibonacci series of numbers below 40000 and even
  * Return: 0 when executed succesfully
  */
int main(void)
{
int a = 1;
int b = 2;
int c;
int sum = 0;
while (a <4000000)
{
if (a % 2 == 0)
{
sum =+ a;
}
c = a + b;
a = b;
b = c;
}
printf("%d\n", sum);

return (0);
}
