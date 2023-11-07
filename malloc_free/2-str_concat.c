#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: specific char1
 * @s2: specific char2
 * Return: s1 contents followed by s2 contents
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int str_length_1 = 0;
	int str_length_2 = 0;
	int total_length;
	char *concatenated;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);
	while (s1[str_length_1] != '\0')
		str_length_1++;
	while (s2[str_length_2] != '\0')
		str_length_2++;
	total_length = str_length_1 + str_length_2;
	concatenated = malloc(sizeof(char) * (total_length + 1));
	if (concatenated == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		concatenated[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		concatenated[str_length_1 + i] = s2[i];
	return (concatenated);
}
