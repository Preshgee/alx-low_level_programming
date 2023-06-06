#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all element of the linked list
 * @h: element of the linked list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int a;

	a = 0;
	while (h != NULL)
	{
		{
			printf("%d", (*h).n);
			a++;
			h = (*h).next;
			printf("\n");
		}
	}
	return (a);
}
