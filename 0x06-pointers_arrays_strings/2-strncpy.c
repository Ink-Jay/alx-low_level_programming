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

int j;

j = 0;


while (src[j] != '\0' && j < n) 
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
