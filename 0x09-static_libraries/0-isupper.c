#include "main.h"

/**
 * _isupper - checks if a char is uppercase
 *
 * @c: checks input of function
 *
 * Return: 1 if 'c' is uppercase
 *              otherwise always 0 (Success)
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
