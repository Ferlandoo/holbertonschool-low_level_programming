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
	(void) argc;
	
	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
