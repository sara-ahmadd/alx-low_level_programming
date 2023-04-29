#include "lists.h"
/**
 * free_listint - free the linked list
 * @head: the head node of the list
 */
void free_listint(listint_t *head)
{
	listint_t *curr = head, *nextNode;

	if (head)
	{
		while (curr)
		{
			nextNode = curr->next;
			free(curr);
			curr = nextNode;
		}
		free(curr);
	}
}
