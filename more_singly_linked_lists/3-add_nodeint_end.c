#include "lists.h"

/**
 * add_nodeint_end - adds node at end of list
 * @head: pointer to first in list
 * @x: data to be inserted
 * return: pointer to node or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int x)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->x = x;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
