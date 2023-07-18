#include "lists.h"

/**
 * print_listint - prints elements of the list
 * @x: is linked list of print_listint
 * return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (x)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
