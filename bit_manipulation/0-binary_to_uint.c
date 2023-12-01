#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: The binary string to convert.
 * Return: The converted unsigned integer, or 0 if an error occurs.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num <<= 1;
		if (b[i] == '1')
			num += 1;
		i++;
	}
	return (num);
}
