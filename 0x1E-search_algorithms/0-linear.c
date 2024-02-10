#include "search_algos.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - Fct searche for a value in  array of
 * integer using the Linear search algorithm
 * @array: Pointer to search the value in
 * @size: The size of the array
 * @value: value to search for
 *
 * Return: the index where array is located,
 * or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t k = 0;

	if (!array || size == 0)
		return (-1);

	while (k < size)
	{
		printf("Value checked array[%lu] = [%d]\n", k, array[k]);
		if (array[k] == value)
			return (k);
		k++;
	}

	return (-1);
}
