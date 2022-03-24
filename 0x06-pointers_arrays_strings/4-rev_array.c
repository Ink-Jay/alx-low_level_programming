#include "main.h"
/**
 * reverse_array - reverses content of an arra of integers
 * @a: pointer to array to be reversed
 *  n: number of elements of array
 *  Return: void
 */
void reverse_array(int *a, int n)
{
int i;
int j;
int temp;

j = n -1 ;

for (i = 0; i < n / 2 ; i++)
{
temp = a[i];
a[i] = a[j];
a[j--] = temp;
}
}
