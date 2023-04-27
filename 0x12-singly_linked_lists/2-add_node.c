#include "lists.h"


/**
 * add_node - add new node in the start
 * @head: the head node
 * @str: string to add
 * Return: struct
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

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
		newNode->len = strlen(newNode->str);
	}
	newNode->next = *head;
	*head = newNode;
	return (newNode);

}
