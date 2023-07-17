#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node will add a new node at beginning of linked list
 * head will double pointer to list_t list
 * str is a new string to add in node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
		if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
