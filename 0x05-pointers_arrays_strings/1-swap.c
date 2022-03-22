#include "main.h"

/**
 * swap_int - swap values of two integers
 * @a: poiner to one integer
 * @b: pointer to another integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;

return (0);
}
