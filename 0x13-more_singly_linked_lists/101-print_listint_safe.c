#include "lists.h"
/**
 * print_listint_safe - print list nodes
 * @head: the root node
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *curr = head;
	size_t i = 0;

	if (!head)
		return (NULL);

	while (curr)
	{
		printf("[%d]%d\n",curr, curr->n);
		i++;
		curr = curr->next;
	}
	return (i);
}
