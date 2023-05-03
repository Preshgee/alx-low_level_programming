#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - Returns the length of a string
 * @s: The string whose length would be gotten
 * Return: length of string:
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '0')
	{
		len++;
		s++;
	}

	return (len - 1);
}
