#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: The command line arguments
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		if (i == 0)
		{
			printf("%s", argv[i]);
		}

	}
	printf("\n");
	return (0);
}
