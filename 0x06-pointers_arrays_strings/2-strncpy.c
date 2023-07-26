#include "main.h"

/**
 * _strncpy - copies string from src to dest
 *
 * @n: number of bytes to be copied
 *
 * @src: string to be copied
 *
 * @dest: pointer to new location
 *
 * Return: pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
