#include "lists.h"
/**
 * free_listint - free the linked list
 * @head: the head node of the list
 */
void free_listint(listint_t *head)
{
	listint_t *curr, *nextNode;

	if (head)
	{
		curr = head;
		while (curr)
		{
			nextNode = curr->next;
			free(curr->n);
			curr = nextNode;
		}
		free(curr)
	}
}
