#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint - free the linked list
 * @head: the head node of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *curr, *tmp;

	if (head)
	{
		curr = head;

		while (curr != NULL)
		{
			tmp = curr;
			curr = curr->next;
			free(tmp);
		}
	}
	head = NULL;
}
