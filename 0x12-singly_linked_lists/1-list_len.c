#include "lists.h"
/**
 * list_len - return ;ength of list
 * @h: head of the list
 * Return: length of the list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
