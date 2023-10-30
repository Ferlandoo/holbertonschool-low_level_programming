#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _print_rev_recursion - prints a string reverse
 * @s: input
 * Return: for last char
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
