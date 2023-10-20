#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - Print numbers
 * Return: numbers from 1 to 9 without 2 and 4
 */
void more_numbers(void)
{
	int n;
	int i;
	int a;

	while (a <= 9)
	{
		for (n = 0; n <= 9; n++)
		{
			_putchar(n + 48);
		}
		for (i = 0; i <= 4; i++)
		{
			_putchar((i / 10) + 49);
			_putchar((i % 10) + 48);
		}
		printf("\n");
		a++;
	}
}
