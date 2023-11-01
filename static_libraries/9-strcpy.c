#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copy the content of one variable to another
 * @dest: this is destination
 * @src: this is copy
 * Return: get the copy
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
