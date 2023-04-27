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
	list_t *current = *head;

	if (!head || !newNode)
	{
		return (NULL);
	}

	if (str)
	{
		newNode->str = strdup(str);
		if (!newNode->str)
		{
			free(newNode);
			return (NULL);
		}
		newNode->len = strlen(str);
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
