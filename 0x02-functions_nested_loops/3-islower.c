
#include <stdio.h>

/**
  * _islower - check if a character is lowercase
  * @c: character to check
  * Return: 1 if lowercase 0 if not lowercase
  */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
