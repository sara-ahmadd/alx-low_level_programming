#include "lists.h"

/**
 * createNode - creat new node
 * @str: the string
 * Return: struct
 */
list_t createNode (const char *str)
{
	list_t *newNode;
	newNode->str = str;
	newNode->next = NULL;
}

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
		retunr (NULL);
	}

	newNode->str = str;
	newNode->next = *head;
	return (newNode);

}
