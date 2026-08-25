#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if successful, or -1 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int position = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	while (current != NULL && position < index)
	{
		current = current->next;
		position++;
	}

	if (current == NULL)
		return (-1);

	if (current->prev != NULL)
		current->prev->next = current->next;
	else
		*head = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);

	return (1);
}
