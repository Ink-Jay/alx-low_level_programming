#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: the number of bytes to copy
 * Return: pointer to memory dest to return
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);

}


