#include "lists.h"
/**
 * listint_len - return length of linked list
 * @h: head node of the lists
 * Return: number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current;
	size_t count = 0;

	if (h)
	{
		current = h;

		while (current)
		{
			count++;
			current = current->next;
		}
	}
	return (count);
}
