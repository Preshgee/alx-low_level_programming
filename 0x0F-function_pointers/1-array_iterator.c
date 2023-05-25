#include <stdio.h>

/**
 * array_iterator - executes a function as a parameter on each element of an array
 * @array: array to be iterated
 * @size: size of array
 * @action: pointer to the function
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

