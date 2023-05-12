#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: number whose square root will be calculated
 *
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculates natural square root
 * @n: number whose square root will be calculated
 * @i: iterator
 *
 * Return: natural square root
 */
int _sqrt(int n, int i)
{
	if (i * i > 1)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
