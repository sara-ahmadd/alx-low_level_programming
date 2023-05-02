#include "lists.h"

/**
 * free_listint_safe - free linled list
 * @h: root node
 * Return: number of nodes
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *curr;
	size_t i = 0;

	if (h)
	{
		while (curr != NULL)
		{
			listint_t *tmp;
			tmp = curr;
			curr = curr->next;
			free(tmp);
			i++;
		}
		*h = NULL;

	}
	return (i);
}
