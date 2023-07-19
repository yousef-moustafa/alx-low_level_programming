#include "main.h"
#include <limits.h>
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: number input
 *
 * Return: value of last digit
*/

int print_last_digit(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	if (n == INT_MIN)
	{
		n = -(n + 2);
	}
	n = n % 10;

	_putchar(n + '0');
	return (n);
}
