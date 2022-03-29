#include <stdlib.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: memory area of string that is to be checked
 * @c: character to be checked
 * Return: pointer to memory of character
 */

char *_strchr(char *s , char c)
{
while (*s)
{
if (*s != c)
{
s++;
}
else
{
return (s);
}
}
if (c == '\0')
{
return (s);
}
return (NULL);
}
