#include "lists.h"

/**
 * sum_listint - add values inside nodes
 * @head: the head node
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);

}
