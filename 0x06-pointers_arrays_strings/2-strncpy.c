#include "main.h"

/**
 * _strncpy - appends two strings
 * @dest:  destination
 * @src: string to copy
 * @n: number of characters to copy
 * Return: pointer to resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{

int length;

length = 0;


while (src[lenth] != '\0' && length < n) 
{
dest[length] = src[length];
length++;
}
while (length < n)
{
dest[length] = '\0';
length++;
}
return (dest);
}
