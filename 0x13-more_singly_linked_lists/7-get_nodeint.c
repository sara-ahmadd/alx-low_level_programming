#include "lists.h"

/**
 * get_nodeint_at_index - return node at specific index
 * @head: the head node
 * @index: the required index
 * Return: the node at (index)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *currNode;
	unsigned int i;

	for (currNode = head, i = 0; currNode && i < index;
		       currNode = currNode->next, i++)
	{
		;
	}
	return (currNode);
}
