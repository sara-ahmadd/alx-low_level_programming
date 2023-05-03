#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdint.h>
#include "lists.h"

/**
 * free_listint - free the linked list
 * @head: the head node of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *curr = head, *tmp;

	if (head == NULL)
	{

		while (curr != NULL)
		{
			tmp = curr;
			curr = curr->next;
			free(tmp);
		}
	}
	head = NULL;
}
