#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: a pointer to a 2 dimensional array of intigers
 */

int **alloc_grid(int width, int height)
{
	int **my_array;
	int j, k;

	if (width <= 0 || height <= 0)
		return (NULL);
	my_array = malloc(sizeof(int *) * height);
		if (my_array == NULL)
			return (NULL);
		for (j = 0; j < height; j++)
		{
			my_array[j] = malloc(sizeof(int) * width);
			if (my_array[j] == NULL)
			{
				while (j >= 0)
				{
					free(my_array[j]);
					j--;
				}
				free(my_array);
				return (NULL);
			}
		}
		for (j = 0; j < height; j++)
		{
			for (k = 0; k < width; k++)
			{
				my_array[j][k] = 0;
			}
		}
		return (my_array);
}
