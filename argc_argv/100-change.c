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
	int i, j;
	int res = 0;
	int nr = atoi(argv[1]);
	int cents[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (nr < 0)
	{
		printf("0\n");
	}
	else
	for (i = 0; i < 5; i++)
	{
		while (nr >= cents[i])
		{
			nr = nr - cents[i];
			res++;
		}
	}
	printf("%d\n", res);
	return (0);
}
