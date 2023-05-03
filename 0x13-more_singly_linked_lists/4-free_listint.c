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
	listint_t *curr, *tmp;
	int i = 0;

	if (head)
	{
		curr = head;

		while (curr != NULL)
		{
			printf("hello from while loop! %d\n", i++);
			tmp = curr;
			curr = curr->next;
			free(tmp);
			printf("bye\n");
		}
		head = NULL;
	}
}
