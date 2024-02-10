#include "search_algos.h"

/**
  * binary_search - Fct searche for a value in a sorted array
  *                 of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of element in the array.
  * @value: The value to searche for.
  *
  * Return: If the value is not present or  array is NULL, -1.
  *         Otherwise, the index where the value is locate.
  *
  * Descript: Print the [sub]array being searched after each change.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t k, lft, rght;

	if (array == NULL)
		return (-1);

	for (lft = 0, rght = size - 1; rght >= lft;)
	{
		printf("Searching in array: ");
		for (k = lft; k < rght; k++)
			printf("%d, ", array[k]);
		printf("%d\n", array[k]);

		k = lft + (rght - lft) / 2;
		if (array[k] == value)
			return (k);
		if (array[k] > value)
			rght = k - 1;
		else
			lft = k + 1;
	}

	return (-1);
}
