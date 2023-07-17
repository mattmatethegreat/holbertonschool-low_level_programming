#include <stlib.h>
#include "lists.h"

/**
 * free_list will free linked list
 * head makes list_t list free
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
		{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
		}
}
