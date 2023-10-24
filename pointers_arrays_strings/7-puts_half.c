#include "main.h"
/**
 * puts_half - print second half of string
 * @str: half of string
 */
void puts_half(char *str)
{
	int len = 0;
	int half;

	while (str[len] != '\0')
		len++;
	half = len / 2;
	if (len % 2 == 1)
		half++;
	while (half < len)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
