#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - prints struct dog
 * @d: pointer to struct dog
 *
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
		return (nil);
	printf("Name: %s\n", (*d).name);
	printf("Age: %s\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}
