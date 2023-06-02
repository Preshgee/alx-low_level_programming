#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns the num of elements in a linked list
 * @h: pointer to a constant
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	int a;

	a = 0;
	while (h != NULL)
	{
		a++;
		h = h->next;
	}
	return (a);
}
