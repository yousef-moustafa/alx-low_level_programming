#include "main.h"

/**
 * _islower - checks if a char is lowercase
 *
 * @c: checks input of function
 *
 * Return: 1 if 'c' is lowercase
 *		otherwise always 0 (Success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
