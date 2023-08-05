#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @c: is the integer input
 *
 * Return: positive integer of input
*/

int _abs(int c)
{
	if (c < 0)
	{
		c *= -1;
		return (c);
	}
	return (c);
}
