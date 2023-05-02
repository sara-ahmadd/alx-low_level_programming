#include "lists.h"
/**
 * print_listint_safe - print list nodes
 * @head: the root node
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr;
	size_t i = 0;

	if (!head)
	{
		exit(98);
	}

	curr = head;

	while (curr)
	{
		printf("[%p] %d\n", (void *)curr, curr->n);
		i++;
		curr = curr->next;
	}
	printf("->[%p] %d\n",(void *)head, 98);
	return (i);
}
