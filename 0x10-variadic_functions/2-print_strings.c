#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints string
 * @separator: the string to be printedbtw the strings
 * @n: the number of strings passed
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;

	va_list valist;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(valist, char *);
		if (!string)
			string = "(nil)";
		if (!separator)
			printf("%s", string);
		else if (separator && i == 0)
			printf("%s", string);
		else
			printf("%s%s", separator, string);
	}

	printf("\n");

	va_end(valist);
}
