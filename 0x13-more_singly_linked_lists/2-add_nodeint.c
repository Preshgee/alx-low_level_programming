#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the linked  list
 * @n: integer
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	struct listint_s *tmp = NULL;

	tmp = (struct listint_s *)malloc(sizeof(struct listint_s));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;
	return (tmp);

}
