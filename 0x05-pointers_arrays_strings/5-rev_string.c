#include "main.h"
#include <stdlib.h>
/**
 * rev_string - reverses a string
 *
 * @s: first char
 *
 * Return: void
*/

void rev_string(char *s)
{
	int length = 0;
	char *tmp = NULL;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}


	tmp = malloc((length + 1) * sizeof(char));

	for (i = 0; i < length; i++)
	{
		tmp[i] = s[length - i - 1];
	}

	tmp[length] = '\0';

	for (i = 0; i <= length; i++)
	{
		s[i] = tmp[i];
	}

	free(tmp);
}
