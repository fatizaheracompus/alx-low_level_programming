#include "search_algos.h"

/**
  * interpolation_search - Fct searche for  value in a sorted array
  *                        of integer using interpolation search.
  * @array: A pointer to the first element of the array to search.
  * @size: the number of element in  array.
  * @value: the value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Descrpt: Prints  value every time it is compared in the array..
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t k, lf, rg;

	if (array == NULL)
		return (-1);

	for (lf = 0, rg = size - 1; rg >= lf;)
	{
		k = lf + (((double)(rg - lf) / (array[rg] - array[lf])) * (value - array[lf]));
		if (k < size)
			printf("Value checked array[%ld] = [%d]\n", k, array[k]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", k);
			break;
		}

		if (array[k] == value)
			return (k);
		if (array[k] > value)
			rg = k - 1;
		else
			lf = k + 1;
	}

	return (-1);
}
