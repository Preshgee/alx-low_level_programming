#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - add a node at the end of the  lis_t list.
 *@head: Address of first element of the list
 *@n: integer
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	struct listint_s *new = NULL;
	struct listint_s *tmp = NULL;

	new = (struct listint_s *)malloc(sizeof(struct listint_s));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	} else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (new);

}
