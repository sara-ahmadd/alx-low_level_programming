#include "lists.h"

/**
 * find_listint_loop - find loop in the list
 * @head: the root node
 *
 * Return: address of the node
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *curr, *nxt;

	if (!head)
	{
		return (NULL);
	}
	curr = head;
	nxt = head->next;

	while (curr)
	{
		if (curr == nxt)
		{
			return (curr);
		}

		curr = curr->next;
	}
	return (NULL);
}
