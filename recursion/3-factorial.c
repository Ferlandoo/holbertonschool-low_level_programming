#include "main.h"
#include <stdio.h>
/**
 * factorial - factorial of given numbers
 * @n: input
 * Return: -1 for error and other for factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
