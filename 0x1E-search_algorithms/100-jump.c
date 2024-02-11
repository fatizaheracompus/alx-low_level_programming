#include "search_algos.h"

/**
  * jump_search -  Fct searches for a value in sorted array
  *               of integer using jump search.
  * @array: A pointer to the first element  the array to search.
  * @size: The number of element in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or  array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Descrt: Print  value every time  is compared in the array.
  *              Uses the square root of the array size as the jump step.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t k, jmp, stp;

	if (array == NULL || size == 0)
		return (-1);

	stp = sqrt(size);
	for (k = jmp = 0; jmp < size && array[jmp] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jmp, array[jmp]);
		k = jmp;
		jmp += stp;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", k, jmp);

	jmp = jmp < size - 1 ? jmp : size - 1;
	for (; k < jmp && array[k] < value; k++)
		printf("Value checked array[%ld] = [%d]\n", k, array[k]);
	printf("Value checked array[%ld] = [%d]\n", k, array[k]);

	return (array[k] == value ? (int)k : -1);
}
