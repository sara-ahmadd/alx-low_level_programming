#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free the linked list
 * @head: the head node of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *curr;

	if (head)
	{

		while (head != NULL)
		{
			curr = head;
			head = head->next;
			free((void *)curr);
		}
		head = NULL;
	}
}
