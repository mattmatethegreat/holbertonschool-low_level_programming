#include "lists.h"

/**
 * add_nodeint - adds node at beginnning of list.
 * @head: is first node pointer
 * @x: data to be inserted
 * return: pointer to new node or NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int x)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->x = x;
	new->next = *head;
	*head = new;

	return (new);
}
