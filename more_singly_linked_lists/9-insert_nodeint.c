#include "lists.h"

/**
 * insert_nodeint - inserts new node in list at given position
 * @head: pointer to first node
 * @index: index where node is added
 * @x: data to insert
 * return: pointer to new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int x)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->x = x;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < index; i++)
	{
		if (i == index - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
