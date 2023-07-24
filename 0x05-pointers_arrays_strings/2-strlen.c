#include "main.h"

/**
 * _strlen - returns length of string
 *
 * @s: first char of string
 *
 * Return: length
*/

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s = s + 1;
	}
	return (count);
}
