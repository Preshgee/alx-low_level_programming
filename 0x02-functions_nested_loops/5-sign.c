#include "main.h"

/**
 * print_sign - Checks sign of a number
 * @n: Number whose sign is to be checked
 * Return: 1 if greater than 0, 0 if equal to 0, -1 if less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
