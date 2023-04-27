#include "lists.h"
/**
 * free_list - free a linked list
 * @head: head node
 */
void free_list(list_t *head)
{
	if (!head->next)
	{
		free(head);
	}
	list_t *current = head;

	while (current->next)
	{
		current = current->next;
	}
	free(current);
}
