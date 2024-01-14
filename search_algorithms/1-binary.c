#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1 if value is not present
 * in array or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, middle;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		printf("Searching in array: ");
		for (middle = low; middle <= high; middle++)
		{
			if (middle != high)
				printf("%d, ", array[middle]);
			else
				printf("%d\n", array[middle]);
		}
		middle = (low + high) / 2;
		if (array[middle] < value)
			low = middle + 1;
		else if (array[middle] > value)
			high = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
