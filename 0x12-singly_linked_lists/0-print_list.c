#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a list
 * @h: pointer to the constant
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t v = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		v++;
	}

	return (v);
}
