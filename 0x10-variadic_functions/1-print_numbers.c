#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers,
 * followed by a new line
 * @separator: String to be printed
 * @n:  Number of integers passed to the function
 * @...: The integers to print
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i = n;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%d%s", va_arg(ap, int), i ?
		(separator ? separator : "") : "\n");
	va_end(ap);
}

