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
		switch (format[i])
		{
			case 'c':
				printf("%c, ", va_arg(lista, int));
				break;
			case 'i':
				printf("%d, ", va_arg(lista, int));
				break;
			case 'f':
				printf("%f, ", va_arg(lista, double));
				break;
			case 's':
				str = va_arg(lista, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				if (str)
				{
					printf("%s", str);
				}
				break;
			default:
				i++;
				continue;
		}
		if (i < size - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf ("\n");
	va_end (lista);
}
