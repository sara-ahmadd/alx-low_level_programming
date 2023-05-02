#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete node at index
 * @head: head node
 * @index: the req index
 * Return: 1 if succeded
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *prev;
	unsigned int i;

	if (!head || !*head)
	{
		return (-1);
	}

	if (!index)
	{
		curr = *head;
		*head = (*head)->next;
		free(curr);
		return (1);

	}
	curr = *head;

	while (curr)
	{
		if (i == index)
		{
			prev->next = curr->next;
			free(curr);
			return (1);
		}
		i++;
		prev = curr;
		curr = curr->next;
	}
	return (1);
}
