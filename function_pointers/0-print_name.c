#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that print name
 * @f: pointer to function
 * @name: name of person
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	f(name);
}
