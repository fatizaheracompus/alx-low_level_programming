#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings -  function that prints strings
 * @separator:  The String to be printed between
 * @n: The number of strings
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i = n;
	char *str;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%s%s", (str = va_arg(ap, char *)) ? str :
				"(nil)", i ? (separator ? separator : "") : "\n");

	va_end(ap);
}
