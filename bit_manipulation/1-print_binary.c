#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if ((n >> 1) == 0)
	{
		_putchar('0' + (n & 1));
	}
	else
		print_binary(n >> 1);
	_putchar('0' + (n & 1));
}
