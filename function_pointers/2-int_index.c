#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that search for an integer
 * @array: array to search in
 * @size: number of elements
 * @cmp: pointer to the function for compare value
 * Return: index of the first element where cmp function
 * does not return 0, and -1 where no element matches or
 * size is negative
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
