#include <stdio.h>
#include "lists.h"

/**
 * this prints all the elemnts in linked list.
 * h is the pointer to list_t list
 * Return: number of printed nodes
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;
	
	while (h)
	{
	if (!h->str)
	printf("[0] (nil)\n");
	else
	printf("[%u] %s\n", h->len, h->str);
	
	h = h->next;
	s++;
			        }
	return (s);
}
