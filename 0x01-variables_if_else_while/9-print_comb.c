#include <stdio.h>

/**
 * main - prints single digit numbers followed by comma space
 *
 * Return: always 0 (Success)
*/

int main(void)
{
	int num = 48;

	while (num <= 56)
	{
		putchar(num);
		if (num == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('\n');
	return (0);
}
