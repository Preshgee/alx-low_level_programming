#include "main.h"
/**
 * _isalpha - Checks of character is lowercase or uppercase
 * @c: The character to be checked
 * Return: 1 for lowercase or uppercase, 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
