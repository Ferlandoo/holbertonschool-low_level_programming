#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: values of min
 * @max: values of max
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int len = 0;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		ptr[i] = min++;
	return (ptr);
}
