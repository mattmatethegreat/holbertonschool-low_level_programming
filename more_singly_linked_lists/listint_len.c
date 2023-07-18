#include "lists.h"

/**
 * listint_len - returns number of elements in list
 * @x: is the linked list to traverse
 * return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (x)
	{
		num++;
		h = h->next;
	}

	return (num);
}
