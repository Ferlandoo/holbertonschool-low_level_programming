#include "main.h"
#include <stdio.h>
/**
 * print_array - print array with comman and space
 * @a: input array
 * @n: lenght of the array
 */
char *_strcpy(char *dest, char *src)
{
	char *i = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (i);
}
