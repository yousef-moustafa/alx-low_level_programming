#include "main.h"

/**
 * swap_int - swaps the vakue of two ints
 *
 * @a: first int
 * @b: second int
 *
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
