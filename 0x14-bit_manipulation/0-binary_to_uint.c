#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b:  pointing to a string of 0 and 1 chars
 * Return:  the converted number, or 0 if input is NULL or not 0 or 1
*/

unsigned int binary_to_uint(const char *b)
{
	int size = 0;
	int i = 0;
	unsigned int num = 0;
	int pow = 0;

	if (b == NULL)
		return (0);

	while (b[size] != '\0')
	{
		size++;
	}

	for (i = size - 1; i >= 0; i--, pow++)
	{
		if (b[i] == '0')
			num += 0;
		if (b[i] == '1')
			num += (1 << pow);
		else
			return (0);
	}
	return (num);
}
