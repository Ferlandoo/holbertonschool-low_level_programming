#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list lista;
	unsigned int i = 0;
	char *str;

	va_start(lista, format);
	while (i < strlen(format))
	{
		if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
		{
		(Coming Soon)
		}
		i++;
	}
	printf("\n");
	va_end(lista);
}
