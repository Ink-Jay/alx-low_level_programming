#include "main.h"

/**
 * _memset - fills the memory with a constant byte
 * @s: pointer to memory are to fill
 * @b: constant byte to fill
 * @n: the number of times to fill
 * Return: pointer to memory s to return
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned long int i;

for ( i = 0; i < n; i++)
{
s[i] = b;
}

return (s);

}


