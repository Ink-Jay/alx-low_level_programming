
#include <stdio.h>

/**
  * main - prints the first 50 fibonacci numbers
  * Return: 0 when executed succesfully
  */
int main(void)
{
long int a = 1;
long int b = 2;
long int c;
int i;

for (i = 0; i < 50; i++)
{
printf("%ld\n", a);

c = a + b;
a = b;
b = c;
}
return (0);
}
