#include "lists.h"
/**
 * add_node_end - add new node at the end
 * @head: the head node
 * @str: the string to be added
 * Return: address to the new element or null if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (*head == NULL)
	{
		*head = newNode;
	}

	list_t *current = *head;

	while (current != NULL)
	{
		current = current->next;
	}
	current->next = newNode;
	return (newNode);
}
