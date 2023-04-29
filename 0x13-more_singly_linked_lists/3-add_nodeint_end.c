#include "lists.h"
/**
 * add_nodeint_end - add new node at the end of the list
 * @head: head node of the list
 * @n: the value inside the node
 *
 * Return: address of the node or NULL in case of failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *current = *head;

	if (!head || !newNode)
		return (NULL);

	if (n)
	{
		newNode->n = n;
		if (!newNode->n)
		{
			free(newNode);
			return (NULL);
		}
	}
	if (current)
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newNode;
	}
	else
	{
		*head = newNode;
	}
	return (newNode);
}
