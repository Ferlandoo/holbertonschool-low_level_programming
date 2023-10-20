#include "main.h"
#include <stdio.h>
/**
 * more_numbers - print numbers from 1 to 14, 10 times
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
		if (b > 9)
		{
			_putchar('0' + b / 10);
		}
		_putchar('0' + b % 10);
	}
		_putchar('\n');
	}
}
