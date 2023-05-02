#include "lists.h"
/**
 * pop_listint - delete head node  in the list
 * @head: the head node
 *
 * Return: n in the head node
 */
int pop_listint(listint_t **head)
{
	listint_t *curr;
	int n;

	if (!head || !*head)
		return (0);

	curr = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = curr;
	return (n);

}
