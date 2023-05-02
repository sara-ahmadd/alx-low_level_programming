#include "lists.h"
/**
 * free_listint - free the linked list
 * @head: the head node of the list
 */
void free_listint(listint_t *head)
{
	listint_t *curr;

	while (head)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
}
