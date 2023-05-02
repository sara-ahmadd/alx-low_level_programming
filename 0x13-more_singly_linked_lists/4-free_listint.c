#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - free the linked list
 * @head: the head node of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *curr;

	if (!head)
	{
		return;
	}

	while (head)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
}
