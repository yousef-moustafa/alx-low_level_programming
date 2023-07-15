#include <stdio.h>

/**
 * main - prints single base 10 digits
 *
 * Return: always 0 (Success)
*/

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
