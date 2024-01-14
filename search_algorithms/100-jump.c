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
    
    while(array[end] < value && end < size)
	{
		printf("Value checked array[%lu] = [%d]\n", end, array[end]);
        start = end;
        end = end + sqrt(size);
    }
	printf("Value found between indexes [%lu] and [%lu]\n", start, end);
    if(end > size - 1)
        end = size-1;
	for(start = 0; start <= end; start++)
	{ 
    	printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		if(array[start] == value)
        	return (start); 
	}
	return (-1);
}
