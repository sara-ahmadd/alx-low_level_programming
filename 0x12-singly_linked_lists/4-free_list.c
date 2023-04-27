#include "lists.h"
/**
 * free_list - free a linked list
 * @head: head node
 */
void free_list(list_t *head)
{
	if (head)
	{
		free(head);
	}
}
