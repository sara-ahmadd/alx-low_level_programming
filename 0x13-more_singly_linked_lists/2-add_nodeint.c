#include "lists.h"
/**
 * add_nodeint - add new node at start of the list
 * @head: the head node
 * @n: value inside the new node
 *
 * Return: the address of the new node or null in case of filure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!head || !newNode)
	{
		return (NULL);
	}
	if (n)
	{
		newNode->n = n;
		if (!newNode->n)
		{
			free(newNode);
			return (NULL);
		}
		newNode->next = *head;
		*head = newNode;
	}
	return (newNode);
}
