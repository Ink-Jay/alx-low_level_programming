#include "main.j"
#include <stdio.h>

/**
  * _isupper - checks for upper characters
  * @c: character to be checked
  * Return: 1 if uppercase and 0 otherewise
  */
int _isupper(int c)
{
if ((c >= 'A') || (c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
