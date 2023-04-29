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

	if (head && newNode)
	{
		newNode = *head;
		newNode->n = n;
		*head = newNode->next;
	}
	else if (!newNode)
	{
		return (NULL);
	}
	else
	{
		newNode = *head;
		newNode->n = n;
	}
	return (newNode);
}
