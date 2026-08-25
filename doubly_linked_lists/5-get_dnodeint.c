#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node at a given index
 * @head: pointer to the first node
 * @index: index of the requested node
 *
 * Return: address of the node, or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int position = 0;

	while (head != NULL)
	{
		if (position == index)
			return (head);

		head = head->next;
		position++;
	}

	return (NULL);
}
