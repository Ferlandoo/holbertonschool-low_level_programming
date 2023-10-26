#include "main.h"
/**
 * *_memcpy - fills memory with a emory area
 * @dest: memory area to be filled
 * @src: memory area to copy
 * @n: number of times to copy src
 * Return: pointer to the memory area s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
