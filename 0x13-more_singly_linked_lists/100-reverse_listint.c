#include "lists.h"

/**
 * reverse_listint - reverse linked list
 * @head: the head node
 * Return: the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr, *prev, *next;

	if (!head || !*head)
	{
		return (NULL);
	}

	prev = NULL;
	curr = *head;

	while (curr)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*head = prev;
	return (*head);
}
