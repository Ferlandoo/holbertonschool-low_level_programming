#include "main.h"
/**
 * puts2 - print numbers and new line
 * @str: input
 */
void puts2(char *str)
{
	int len = 0;
	int i, last_index;

	while (str[len] != '\0')
		len++;
	last_index = len - 1;

	for (i = 0; i <= last_index; i++)
	{
		if (str[i] % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
