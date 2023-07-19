#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: input number
 *
 * Return: 1 if +ve, 0 if zero, -1 if -ve
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		return (0);
	}
}
