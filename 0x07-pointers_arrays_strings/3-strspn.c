#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: segment to return bytes from
 * @accept: bytes to include
 * Return: bytes that have been found
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j;
int c = 0;

for (i = 0; i != '\0'; i++)
{
if (s[i] != 32)
{
for (j = 0; j != '\0'; j++)
{
if (s[i] == accept[j])
{
	c++;
}
}
}
else
{
return (c);
}
}
return (c);
}
