
#include <stdio.h>

/**
  * _isalpha - check if a character is an alphabet
  * @c: character to checK
  * Return: 1 if alphabet o if not
  */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
