#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min value
 * @max: max value
 *
 * Return: pointer to newly created array
 */
void *array_range(int min, int max)
{
	int *ptr, i = 0;

	if (min > max)
		return (NULL);

	ptr = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (ptr == NULL)
		return (NULL);

	while (min <= max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
