#include "main.h"

/**
 * print_alphabet - Entry point
 * Return:0
 */

void print_alphabet_x10(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
                _putchar(ch);
		_putchar(ch);
		_putchar(ch);
		_putchar(ch);
		_putchar(ch);
		_putchar(ch);
		_putchar(ch);
		_putchar(ch);
		_putchar(ch);
		_putchar(ch);
        }
        _putchar('\n');
}
