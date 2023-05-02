#include "lists.h"

/**
 * insert_nodeint_at_index - create node at index i
 * @head: the head node
 * @idx: the required index
 * @n: the value of n in the new node
 * Return: the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *newNode = malloc(sizeof(listint_t));
	unsigned int i;

	for (current = *head, i = 0; current && i < idx - 1;
			current = current->next, i++)

		if (!newNode)
		{
			return (NULL);
		}
		newNode->n = n;
		newNode->next = NULL;

		newNode = current->next;
		return (newNode);
	}
}
