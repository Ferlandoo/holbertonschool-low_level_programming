#include "main.h"
#include <string.h>
/**
 * _puts - print text and new line
 * @str: input
 */
void _puts(char *str)
{
	int len = 0;
	int i, last_index;

	while (str[len] != '\0')
		len++;
	last_index = len - 1;

	for (i = 0; i <= last_index; i++)
		_putchar(str[i]);
	_putchar('\n');
}
