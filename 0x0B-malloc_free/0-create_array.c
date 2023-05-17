#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: character to initailize the array
 *
 * Return: a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *w;

	if (size == 0)
		return (NULL);

	w = malloc(sizeof(char) * size);
	if (w == NULL)
	{
		for (i = 0; i < size; i++)
			w[i] = c;
	}

	return (w);
}
