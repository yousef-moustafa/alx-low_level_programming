#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @src: string to be appended
 *
 * @dest: pointer to final string
 *
 * @n: bytes to be concatenated
 *
 * Return: pointer to the resulting dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int new_start = 0;
	int end = 0;

	while (dest[new_start] != '\0')
	{
		new_start++;
	}

	while (src[end] != '\0')
	{
		if (end >= n)
		{
			break;
		}
		else
		{
			dest[new_start] = src[end];
			new_start++;
			end++;
		}
	}
	dest[new_start] = '\0';
	return (dest);
}
