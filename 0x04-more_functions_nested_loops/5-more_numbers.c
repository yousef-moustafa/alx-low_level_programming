#include "main.h"

/**
 * more_numbers - prints 0-14 10 times
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = '0'; j < '10'; j++)
		{
			_putchar(j);
		}
		for (k = '0'; k < '5'; k++)
		{
			_putchar('1' + k);
		}
		_putchar('\n');
	}
}
