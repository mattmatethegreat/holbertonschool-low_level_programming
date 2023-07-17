#include <stdlib.h>
#include "lists.h"

/**
 * list_len returns the number of elements in list
 * h is pointer to the list_t list
 * returns number of elements
 */

size_t list_len(const list_t *h)
{
       	size_t n = 0;

	while (h)
	{
	n++;
	h = h->next;
	}
	return (n);
}
