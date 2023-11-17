#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list lista;
	int i = 0;
	char *str, *sep="";
	int size = strlen(format);

	va_start(lista, format);
	while (i < size)
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c, ", sep, va_arg(lista, int));
				break;
			case 'i':
				printf("%s%d, ", sep, va_arg(lista, int));
				break;
			case 'f':
				printf("%s%f, ", sep, va_arg(lista, double));
				break;
			case 's':
				str = va_arg(lista, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s%s", sep, str);
				break;
			default:
				i++;
				continue;
		}
		sep=", ";
		i++;
	}
	printf ("\n");
	va_end (lista);
}
