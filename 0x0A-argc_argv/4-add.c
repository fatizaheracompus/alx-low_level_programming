#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that add positive numbers
 * @argc: The number of argument
 * @argv: Array of pointer to arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	char *m;

	while (--argc)
	{
		for (m = argv[argc]; *m; m++)
			if (*m < '0' || *m > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}

