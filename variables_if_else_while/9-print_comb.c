#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nr;

	for (nr = '0'; nr <= '9'; nr++)
	{
		if ('0' < nr && nr <= '9')
		{
			putchar(',');
			putchar(' ');
		}
		putchar(nr);
	}
	putchar('\n');
	return (0);
}
