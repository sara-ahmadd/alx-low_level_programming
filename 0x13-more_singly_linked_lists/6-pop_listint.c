#include "lists.h"
/**
 * pop_listint - delete last item in the list
 * @head: the head node
 *
 * Return: n in the head node
 */
int pop_listint(listint_t **head)
{
	listint_t *curr;

	if (!head)
		return (0);

	curr = *head;

	while (curr->next)
	{
		curr = curr->next;
	}
	curr = NULL;
	free(curr);
	return ((*head)->n);
}
