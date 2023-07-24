#include "main.h"

/**
 * print_rev - prints a string in reverse order
 *
 * @s: first char
 *
 * Return: void
*/

void print_rev(char *s)
{
	char *end;

	end = s - 1;

	while (*s != '\0')
	{
		s++;
	}

	s--;

	while (s != end)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
