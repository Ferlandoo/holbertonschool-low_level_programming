#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicate a string
 * @str: string to be duplicated.
 * Return: pointer to the duplicated string, or NULL if insufficient memory
 * was available.
 */

char *_strdup(char *str)
{
	char *tmp;
	size_t len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str) + 1;
	tmp = malloc(len);
	if (tmp == NULL)
	{
		return (NULL);
	}
	memcpy(tmp, str, len);
	return (tmp);
}
