#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: The command line arguments
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
		printf("Error\n");
	return (0);
}
