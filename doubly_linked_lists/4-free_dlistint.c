#include "lists.h"

/**
 * free_dlistint - frees list
 * @head: head of list pointer
 * return: nothing
 */

void free_dlistint(dlistint_t *head)

{
	if (head == NULL)
		return;
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
