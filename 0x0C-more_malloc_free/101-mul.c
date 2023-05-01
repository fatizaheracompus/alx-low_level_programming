#include "main.h"

/**
 * _puts - print string.
 * @str: pointer to the string
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _atoi - Convert a string to integer
 * @s: Char type string
 *
 * Return: int
 */
int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int resp = 0, fNum, i;

	for (fNum = 0; !(s[fNum] >= 48 && s[fNum] <= 57); fNum++)
	{
		if (s[fNum] == '-')
		{
			sign *= -1;
		}
	}
	for (i = fNum; s[i] >= 48 && s[i] <= 57; i++)
	{
		resp *= 10;
		resp += (s[i] - 48);
	}

	return (sign * resp);
}

/**
 * print_int - print integer
 * @m: integer
 * Return: 0
 */

void print_int(unsigned long int m)
{
	unsigned long int divisor = 1, i, resp;

	for (i = 0; m / divisor > 9; i++, divisor *= 10)
		;
	for (; divisor >= 1; m %= divisor, divisor /= 10)
	{
		resp = m / divisor;
		_putchar('0' + resp);
	}
}

/**
 * main -  multiplies two positive numbers
 * @argc: integer
 * @argv: number of arguments
 *
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}

		print_int(_atoi(argv[1]) * _atoi(argv[2]));
		_putchar('\n');

		return (0);
}




