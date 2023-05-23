#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes struct dog
 * @d: pointer to struct dog
 * @name: data type member 1
 * @age: data type member 2
 * @owner: data type member 3
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
