#include "main.h"
#include <string.h>
/**
 * _puts_recursion - prints a string followed by a new line
 * @s: input
 * Return: 0 for last char with new line and other for characters
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return (0);
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
