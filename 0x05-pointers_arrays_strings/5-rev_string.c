#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: first char
 *
 * Return: void
*/

void rev_string(char *s)
{
	char *tmp;
	char *end = s - 1;

	while (*s != '\0')
	{
		s++;
	}

	s--;

	while (s != end)
	{
		*tmp = *s;
		tmp++;
		s--;
	}

	s = tmp;
}