#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 * @head: head node
 * @index: the req index
 * Return: 1 if succeded
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t curr;
	unsigned int i;

	if (!head)
	{
		return (-1);
	}

	curr = *head;

	while (curr)
	{
		if (i == index - 1)
		{
			free(curr->next);
		}
		i++;
		curr = curr->next;
	}
	return (1);
}
