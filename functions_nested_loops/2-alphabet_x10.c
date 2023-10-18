#include "main.h"

/**
 * print_alphabet - Entry point
 * Return:0
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		for (ch = 0; ch < 10; ch++)
		_putchar(ch);
	}
	_putchar('\n');
}
