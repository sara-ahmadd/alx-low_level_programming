#include "lists.h"
/**
 * pop_listint - delete last item in the list
 * @head: the head node
 *
 * Return: n in the head node
 */
int pop_listint(listint_t **head)
{
	if (!head)
		return (0);

	return ((*head)->n);
	listint_t *curr = *head;

	while (curr->next)
	{
		curr = curr->next;
	}
	curr = NULL;
}
