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

	if (curr)
	{
		while (curr)
		{
			if (curr == tmp)
			{
				return (i);
			}
			printf("[%p] %d\n", (void *)curr, curr->n);
			i++;
			tmp = tmp->next->next;
			curr = curr->next;
		}
		return (i);
	}
	else
	{
		printf("->[%p] %d\n", (void *)head, 98);
		exit(98);
	}
}
