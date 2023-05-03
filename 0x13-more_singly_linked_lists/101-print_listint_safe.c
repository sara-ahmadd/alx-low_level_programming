#include "lists.h"
/**
 * print_listint_safe - print list nodes
 * @head: the root node
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr, *tmp;
	size_t i = 0;

	if (!head)
	{
		exit(98);
	}

	curr = head;
	tmp = head;	

	printf("[%p] %d\n", (void *)curr, curr->n);

	while (curr && tmp && tmp->next)
	{
		tmp = tmp->next->next;
		curr = curr->next;
		i++;
		if (curr == tmp)
		{
			printf("->[%p] %d\n", (void *)curr, curr->n);
			return (i);
		}
		else
		{
			printf("[%p] %d\n", (void *)curr, curr->n);
		}
	}
	return (i);

}
