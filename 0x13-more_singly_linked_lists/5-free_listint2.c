#include "lists.h"
/**
 * free_listint2 - free linked list & set head to NULL
 * @head; the head node of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *curr = head, *nextNode;

	if (!head)
		return;

	while(curr)
	{
		nextNode = curr->next;
		free(curr);
		curr = nextNode;
	}
	free(curr);
	head = NULL;
}
