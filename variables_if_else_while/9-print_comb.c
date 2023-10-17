#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nr;
	short a = ',';
	int nr2 = '9';

	for (nr = '0'; nr <= '8'; nr++)
	{
		putchar(nr);
		putchar(a);
	}
	putchar(nr2);
	putchar('\n');
	return (0);
}
