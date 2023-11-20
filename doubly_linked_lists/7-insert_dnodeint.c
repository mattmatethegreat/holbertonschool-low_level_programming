#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position in a dlistint_t linked list
 * @h: double pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
   dlistint_t *new_node;
   unsigned int i = 0;

   new_node = malloc(sizeof(dlistint_t));
   if (new_node == NULL)
       return NULL;
   new_node->n = n;

   if (idx == 0)
   {
       new_node->next = *h;
       new_node->prev = NULL;
       if (*h != NULL)
           (*h)->prev = new_node;
       *h = new_node;
   }
   else
   {
       dlistint_t *temp = *h;
       while (temp != NULL && i < idx)
       {
           temp = temp->next;
           i++;
       }
       if (temp == NULL)
       {
           free(new_node);
           return NULL;
       }
       new_node->next = temp;
       new_node->prev = temp->prev;
       if (temp->prev != NULL)
           temp->prev->next = new_node;
       temp->prev = new_node;
   }

   return new_node;
}
