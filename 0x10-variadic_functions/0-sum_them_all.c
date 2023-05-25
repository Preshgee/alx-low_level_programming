#include "variadic_function.h"
#include <stdarg.h>

/**
 * sum_them_all - prints the sum of all its parameters
 * @n: number of arguments
 *
 * Return: sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list valist;

	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
