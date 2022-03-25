#include "main.h"


/**
 *  *cap_string - capitalizes all words of a string
 *  @s: string to be converted
 *  Return: converted string
 */

char *cap_string(char *s)
{
int i;
int j;

char sep[13] = {' ', '\t', '\n', ',', ';',
'.', '!', '?', '"', '(', ')', '{', '}'};

for (i = 0; s[i] != '\0'; i++)
{
if ((s[i] >= 'a') && (s[i] <= 'z'))
{
s[i] = s[i] - 32;
}
for ( j = 0; j < 13; j++)
{
if ([i] == sep[j])
{
if ((s[i + 1] >= 'a') && (s[i + 1] <= 'z'))
{
s[i + 1] = s[i + 1] - 32;
}
}
}
}
return (s);
}

