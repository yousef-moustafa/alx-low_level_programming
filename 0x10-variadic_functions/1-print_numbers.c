#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator:  string to be printed between numbers
 * @n:  number of integers passed to the function
 * @...: A variable number of numbers to be printed
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lst;
	unsigned int i;

	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i < (n - 1))
			printf("%d%s", va_arg(lst, int), separator);
		else
			printf("%d", va_arg(lst, int));
	}
	va_end(lst);
}
