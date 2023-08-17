#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: Number of parameters passed
 * @...: ints to calculate sum of
 * Return: sum of the numbers entered
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list lst;
	unsigned int i, sum = 0;

	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(lst, int);
	}

	va_end(lst);
	return (sum);
}
