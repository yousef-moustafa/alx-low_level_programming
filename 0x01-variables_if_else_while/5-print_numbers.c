#include <stdio.h>

/**
 * main - prints single base 10 digits
 *
 * Return: always 0 (Success)
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
