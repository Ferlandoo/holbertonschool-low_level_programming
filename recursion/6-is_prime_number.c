#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - add an exception for i start from 2
 * @n: input
 * Return: n number and i=2 for other function
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
/**
 * is_prime - check if number is prime
 * @n: input
 * @i: number for exeption that number is prime
 * Return: 1 if number is prime, otherwise return 0
 */
int is_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0)
	{
		return (0);
	}
	if (i == n / 2)
	{
		return (1);
	}
	else
		return (is_prime(n, i + 1));
}
