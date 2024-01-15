#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1 if value is not present
 * in array or if array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
    size_t start = 0, end = sqrt(size);
    
	if(array == NULL)
		return (-1);
    while(end < size && array[end] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		start = end;
		end += sqrt(size);
	}
	printf("Value checked array[%lu] = [%d]\n", start, array[start]);
	printf("Value found between indexes [%lu] and [%lu]\n", start, end);
	while(start <= min(end, size - 1))
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		if(array[start] == value)
			return (start);
		start++;
	}
	return (-1);
}

/**
 * min - returns the minimum of two numbers
 * @a: first number
 * @b: second number
 * Return: the minimum of a and b
 */

size_t min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}
