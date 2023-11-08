#include "main.h"
#include <stdlib.h>
/**
 * array_range - sdfsd
 * @min:sdfsdf
 * @max:sdfsd
 * Return:sdfgs
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int len = 0;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int*) * len);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
