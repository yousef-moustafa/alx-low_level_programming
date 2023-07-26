#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: resulting string placed in dest
 *
 * @src: appended to dest
 *
 * Return: pointer to dest
*/

char *_strcat(char *dest, char *src)
{
	int new_start = 0;
	int end = 0;

	while (dest[new_start] != '\0')
	{
		new_start++;
	}

	while (src[end] != '\0')
	{
		dest[new_start] = src[end];
		new_start++;
		end++;
	}
	dest[new_start] = '\0';
	return (dest);
}
