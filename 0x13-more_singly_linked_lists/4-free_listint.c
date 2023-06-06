#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a list_t list
 * @head: first element of the list
 *
 * Return: no return
 */
void free_listint(listint_t *head)
{
	struct listint_s *tmp = NULL;
	struct listint_s *aux =  NULL;

	tmp = head;
	while (tmp != NULL)
	{
		aux = tmp->next;
		free(tmp);
		tmp = aux;
	}
	head = NULL;
}
