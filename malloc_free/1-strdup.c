#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * *_strdup - contain a copy of the string
 * @str: string to be dublicated
 * @len: length of str
 * Return: char pointer to malloc created memory address
 * or NULL if error
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
