#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: diff of two characters
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n/2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
