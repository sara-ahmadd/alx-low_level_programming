#include "lists.h"
/**
 * free_list - free a linked list
 * @head: head node
 */
void free_list(list_t *head)
{
	list_t *current = head, *nextNode;

	if (!head)
		return;

	while (current)
	{
		nextNode = current->next;
		free(current->str);
		free(current);
		current = nextNode;
	}
	free(current);
}
