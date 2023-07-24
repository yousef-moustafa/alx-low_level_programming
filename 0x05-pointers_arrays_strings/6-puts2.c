#include "main.h"

/**
 * puts2 - prints every other char + newline
 * @str: first char of string
 *
 * Return: void
*/

void puts2(char *str)
{
	int num;
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	for (num = 0; num < length; num++)
	{
		if (num % 2 != 0)
		{
			continue;
		}
		_putchar(str[num]);
	}
	_putchar('\n');
}
