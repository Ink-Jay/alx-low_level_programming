#include "main.h"

/**
 * _strncat - appends two strings
 * @dest: string to append to
 * @src: sting to be appended to
 * @n: number of characters to append
 * Return: pointer to resulting string
 */

char *_strcat(char *dest, char *src)
{

int length;
int j;

length = 0;
j = 0;

while ( dest[length] != '\0')
{
length++;
}
while (src[j] != '\0' && j < n) 
{
dest[length] = src[j];
j++;
length++;
}

dest[length] = '\0';

return (dest);
}
