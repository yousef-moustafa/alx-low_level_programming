#include "main.h"

/**
 * _isalpha - checks if the char is an alpha
 *
 * @c: checks input of function
 *
 * Return: 1 if alpha, else 0 (Success)
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
