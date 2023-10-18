#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
void jack_bauer(void)
{
	int a, b;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)
		{
				_putchar((a / 10) + 48);
				_putchar((a % 10) + 48);
				_putchar(':');
				_putchar ((b / 10) + 48);
				_putchar ((b % 10) + 48);
				_putchar('\n');
		}
	}
}
