#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
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
