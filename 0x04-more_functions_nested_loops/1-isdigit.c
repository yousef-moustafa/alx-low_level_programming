#include "main.h"

/**
 * _isdigit - checks if a char is a number
 *
 * @c: the input
 *
 * Return: 1 if digit, otherwise 0
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
