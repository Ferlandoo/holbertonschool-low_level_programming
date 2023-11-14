#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - execute a function given as a parameter
 * on each element of an array
 * @array: array for iterate
 * @size: size of the array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
