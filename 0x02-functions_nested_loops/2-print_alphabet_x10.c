#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int j;

		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}

		_putchar('\n');
		i++;
	}
}
