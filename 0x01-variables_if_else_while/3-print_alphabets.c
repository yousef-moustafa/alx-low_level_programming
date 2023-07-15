#include <stdio.h>

/**
 * main - prints alphabet in lower then upper followed by new line
 *
 * Return: Always 0  (Success)
*/

int main(void)
{
	int i;
	char *lower_alph = "abcdefghijklmnopqrstuvwxyz";
	char *upper_alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for (i = 0; i < 26; i++)
	{
		putchar(lower_alph[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(upper_alph[i]);
	}
	putchar('\n');
	return (0);
}
