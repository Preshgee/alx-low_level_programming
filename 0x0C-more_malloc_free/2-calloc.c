#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory of an array
 * @nmemb: number of elements
 * @size: number of bytes
 *
 * Return: a pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, a = 0;

	char *ptr

	if (size == 0 || nmemb == 0)
		return (NULL);

	a = size * nmemb;
	ptr = malloc(a);

	if (ptr == NULL)
		return (NULL);

	while (i < a)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
