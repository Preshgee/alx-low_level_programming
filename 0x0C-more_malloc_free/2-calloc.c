#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory of an array
 * @nmemb: number of elements
 * @size: number of bytes
 * @b: ......
 *
 * Return: a pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, a = 0;
	char *p

	if (size == 0 || nmemb == 0)
		return (NULL);

	a = size * nmemb;
	p = malloc(a)

	if (p == NULL)
		return (NULL);

	while (i < a)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
