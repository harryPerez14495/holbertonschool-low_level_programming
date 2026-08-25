#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @h: pointer to the head of the list
 * @idx: index where the new node will be inserted
 * @n: integer to store in the new node
 *
 * Return: address of the new node, or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h,
	unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new;
	unsigned int position;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;

	for (position = 0;
	     current != NULL && position < idx - 1;
	     position++)
		current = current->next;

	if (current == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = current;
	new->next = current->next;

	if (current->next != NULL)
		current->next->prev = new;

	current->next = new;

	return (new);
}
