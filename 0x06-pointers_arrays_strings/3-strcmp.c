#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: The first string
 * @s2: The second string
 * Return: 0 if eqaul, less than 0 if s1 < s2, greater than 0 if s1 > s2
 */

int _scrmp(char *s1, char *s2)
{
while (*s1 == *s2)
{
if (*s1 == '\0')
{
return (0);
}
s1++;
s2++;
}
return (*s1 - *s2)'
}
