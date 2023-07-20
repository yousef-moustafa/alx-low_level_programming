#include "main.h"

/**
 * print_line - prints a straight line with size n
 *
 * @n: length of line
 *
 * Return: Always 0 (Success)
*/

void print_line(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
