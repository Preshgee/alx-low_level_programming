#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);


/**
 * is_prime_number - Returns if integer is a prime number
 * @n: number to check
 *
 * Return: 1 if n is a prime number, 0 if otherwise.
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}


/**
 * check_prime - checks is numbr is prime
 * @n: number to be checked
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if otherwise
 */
int check_prime(int n, int i)
{

	if (i != 1)
	{
		if (n % i != 0)
		{
			return (check_prime(n, i - 1));
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

