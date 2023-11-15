#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 * @n: number of parameters
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list lista;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(lista, n);
	for (i = 0; i < n; i++)
		sum += va_arg(lista, int);
	va_end(lista);
	return (sum);
}
