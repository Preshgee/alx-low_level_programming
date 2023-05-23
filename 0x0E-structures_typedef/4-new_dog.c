#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog
 * @name: data type member 1
 * @age: data type member 2
 * @owner: data type member 3
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *a;
	char *b;
	int c, d, e, f;
	struct dog *g;

	g = malloc(sizeof(struct dog));
	if (g == NULL)
		return (NULL);
	for (c = 0; *(name + c) != '\0'; c++)
		;
	for (d = 0; *(owner + d) != '\0'; d++)
		;
	a = malloc(c + 1);
	if (a != NULL)
	{
		for (e = 0; e <= c; e++)
			*(a + e) = *(name + e);
	} else
	{
		free(g);
		return (NULL);
	}
	b = malloc(d + 1);
	if (b != NULL)
	{
		for (f = 0; f <= d; f++)
			*(b + f) = *(owner + f);
	} else
	{
		free(a);
		free(g);
		return (NULL);
	}
	(*g).name = a;
	(*g).age = age;
	(*g).owner = b;
	return (g);

}
