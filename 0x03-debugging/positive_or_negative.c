#include "main.h"
/**
 * positive_or_negative - checks for positive or negative numbers
 *
 * @i: the number
 *
 * Return: always 0
 */


void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
		printf("%d is %s\n", i, "positive");
	}
	else
	{
		printf("'%d is %s\n", i, "zero");
	}
	return ;
}
