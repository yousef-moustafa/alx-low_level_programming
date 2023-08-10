#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of s2 to be included
 *
 * Return: newly allocated memory for string else NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, size1, size2;
	char *new;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;

	size1 = i;
	i = 0;

	while (s2[i] != '\0')
		i++;
	size2 = i;
	i = 0;
	if (n < size2)
		new = malloc(sizeof(char) * (size1 + n + 1));
	else
		new = malloc(sizeof(char) * (size1 + size2 + 1));

	if (new == NULL)
		return (NULL);

	while (i < size1)
	{
		new[i] = s1[i];
		i++;
	}

	while (j < n && s2[j] != '\0')
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	new[i] = '\0';
	return (new);
}
