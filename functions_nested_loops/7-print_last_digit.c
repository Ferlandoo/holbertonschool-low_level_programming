#include "main.h"

/**
 * @n: the character to check
 * Return: 0 absolute number last digit
 */
int print_last_digit(int n)
{
	int a;
	
	if (n < 0)
		n = -n;
	a = n % 10;
	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
