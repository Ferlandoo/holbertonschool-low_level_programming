#include "main.h"
#include <string.h>
/**
 * _strlen - length of characters on s
 * @s: number of characters
 * Return: length of characters
 */
int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != 0; i++)
	{
		len++;
	}
	return (len);
}
