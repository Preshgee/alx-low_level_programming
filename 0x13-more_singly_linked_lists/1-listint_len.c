#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in all linked list.
 * @h: element of the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	int a;

	a = 0;
	while (h != NULL)
	{

		a++;
		h = (*h).next;
	}
	return (a);
}
