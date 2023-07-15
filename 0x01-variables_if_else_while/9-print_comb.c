#include <stdio.h>

/**
 * main - prints single digit numbers followed by comma space
 *
 * Return: always 0 (Success)
*/

int main(void)
{
	char num = 48;

	while (num <= 56)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
	}
	putchar(57);
	return (0);
}
