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
	listint_t *curr, *tmp;
	unsigned int i = 0;

	if (!head)
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
		if (i == index - 1)
		{
			tmp = curr->next;
			curr->next = curr->next->next;
			free(tmp);
			free(curr);
			return (1);
		}
		i++;
		curr = curr->next;
	}
	return (1);
}
