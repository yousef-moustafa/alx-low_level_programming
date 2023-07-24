#include "main.h"

/**
 * puts_half - prints half of string followed by new line
 *
 * @str: first char of str
 *
 * Return: void
*/

void puts_half(char *str)
{
	int length = 0;
	int half;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2)
	{
		half = length / 2;
	}
	else
	{
		half = (length - 1) / 2;
	}

	for (int i = half; half < length; i++)
	{
		_putchar(str[i]);
	}
}
