#include "lists.h"

/**
 * add_dnodeint - adds node at beginnign of distint_t list
 * @head: head of list
 * @n: value
 * return: new element address
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)

{
	dlistint_t *new;
	dlistint_t *h;

	new == malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	n = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	new->next = new;

	*head = new;

	return (new);
}
