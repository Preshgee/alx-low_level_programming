#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of all arguments passed
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *string, *separator = "";

	va_list valist;

	va_start(valist, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case'c':
					printf("%s%c", separator, va_arg(valist, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(valist, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(valist, double));
					break;
				case 's':
					string  va_arg(valist, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", separator, string);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(valist);
}
