#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - checks of integer is a prime number
 * @n: number to check
 *
 * Return: 1 if n is a prime number, 0 if otherwise.
 */
int is_prime_number(int n)
{
	int i;

	if (i != 1)
	{
		if (n % i != 0)
		{
			return (is_prime_number(n, i - 1));
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (1);
	}
}

