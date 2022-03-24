#include "main.h"

/**
 * _strcat - appends two strings
 * @dest: string to append to
 * @src: sting to be appended to
 * Return: resulting string
 */

char *_strcat(char *dest, char *src)
{
int length, j;
length = 0;
j = 0;

while ( dest[length] != '\0')
{
length++;
}
for (j = 0; src[j] != '\0'; j++; length++)
{
dest[length] = src[j];
}

dest[length] = '\0';

return (dest);
}
