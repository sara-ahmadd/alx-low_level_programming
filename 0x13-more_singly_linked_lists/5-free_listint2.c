#include "lists.h"
/**
 * free_listint2 - free linked list & set head to NULL
 * @head: the head node of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *curr, *nextNode;

	if (!head)
		return;

	curr = *head;

	while (curr)
	{
		nextNode = curr;
		curr = curr->next;
		free(nextNode);
	}
	*head = NULL;
}
