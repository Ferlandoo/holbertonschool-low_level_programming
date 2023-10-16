#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%u is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%lu is negative\n", n);
	}
	else
	{
		printf("%u is zero\n", n);
	}
	return (0);
}
