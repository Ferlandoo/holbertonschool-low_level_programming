#include "main.h"
/**
 * rev_string - print reverse string
 * @s: reverse string
 */
void rev_string(char *s)
{
	char tmp;
	int len = 0;
	int i, last_index;

	while (s[len] != '\0')
		len++;
	last_index = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[last_index];
		s[last_index--] = tmp;
	}
}
