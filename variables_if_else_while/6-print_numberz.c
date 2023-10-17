#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nr;

	for (nr = '0'; nr <= '9' ; nr++)
	{
		putchar(nr);
	}
	putchar('\n');
	return (0);
}
