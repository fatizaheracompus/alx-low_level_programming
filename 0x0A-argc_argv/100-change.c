#include <stdio.h>
#include <stdlib.h>

/**
 * main - that prints the minimum number of coins
 * to make change for an amount of money.
 * @argv: array of argument
 * @argc: number of argument
 *
 * Return: 0(success), non zero (fail)
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, lestcents = 0, money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (money >= cents[i])
			{
				lestcents += money / cents[i];
					money = money % cents[i];
				if (money % cents[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", lestcents);
	}
	else
	{
		printf("Error\n");
			return (1);
	}
	return (0);
}

