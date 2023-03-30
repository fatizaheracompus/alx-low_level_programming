#include "main.h"

/**
 *reverse_array -  function that reverses the content
 * of an array of integers
 * @a: pointer of array.
 * @n: number of byttes used.
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int counter, temporary;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		temporary = a[counter];
		a[counter++] = a[n];
		a[n--] = temporary;
	}
}
