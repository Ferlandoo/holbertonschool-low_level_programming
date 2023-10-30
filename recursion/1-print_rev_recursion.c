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
	int i;
	int len;

	len = strlen(s);

	for(i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	return;
}
