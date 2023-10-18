#include "main.h"

/**
 * print_sign - used to print sign
 * @n: the character to check
 * Return: 1 n is greater than zero, 0 if n is zero, -1 if n is less then zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
