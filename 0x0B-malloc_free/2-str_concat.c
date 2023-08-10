#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int size1, size2;
	char *new;
	int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	size1 = i;

	i = 0;

	while (s2[i] != '\0')
	{
		i++;
	}

	size2 = i + 1;
	new = malloc(sizeof(char) * (size1 + size2));

	if (new == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		new[i] = s1[i];
	for (j = 0; s2[j]; j++)
	{
		new[i] = s2[j];
		i++;
	}

	new[i] = '\0';
	return (new);
}
