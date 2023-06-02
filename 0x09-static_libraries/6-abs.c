#include "main.h"

/**
 * _abs - Prints the absolute value of an integer.
 * @a: The integer to compute its absolute value.
 * Return: Returns the abs value.
 */
int _abs(int a)
{
	int k = a;
	int absvalue;

	if (k < 0)
	{
		k = k * (-1);
	}
	absvalue = k;
	return (absvalue);
}
