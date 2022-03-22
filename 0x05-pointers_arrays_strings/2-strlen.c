#include "main.h"

/**
 * _strlen -calculates the lenth of a string
 * @s: pointer to character in string
 * Return:length of string
 */
int _strlen(char *s)
{
int length = 0;
if (*s != '\0')
{
length++;
s++;
}
return (length);
}
