#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - natural sqaure root for number that have one
 * @n: input
 * Return: - -1 if not have a natural square, n if n is 0 or 1
 * and i if has a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
		for (int i = 1; i <= n / 2; i++)
		{
			if (i * i == n)
				return (i);
		}
	return (-1);
}
