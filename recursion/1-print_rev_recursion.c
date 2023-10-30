#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _puts_recursion - prints a string followed by a new line
 * @s: input
 * Return: for last char with new line and other for characters
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
