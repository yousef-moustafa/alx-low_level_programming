#include "main.h"
#include <stdlib.h>
/**
 * reverse_array - reverses content of an integer array
 *
 * @a: array
 *
 * @n: number of elements in array
 *
 * Return: nvoid
*/

void reverse_array(int *a, int n)
{
	int *b = malloc(sizeof(int) * n);
	int i;
	int j = n - 1;

	for (i = 0; i < n; i++)
	{
		b[i] = a[j];
		j--;
	}
	for (i = 0; i < n; i++)
	{
		a[i] = b[i];
	}

	free(b);

}
