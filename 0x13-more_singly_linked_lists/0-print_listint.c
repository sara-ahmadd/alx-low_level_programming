#include "lists.h"
/**
 * print_listint - print all items in linked list
 * @h: the head node of the list
 * Return: number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	listint_t *current = malloc(sizeof(listint_t));
	size_t count = 0;

	if (h)
	{
		current = head;
		while (current != NULL)
		{
			printf("%d", current->n);
			count++;
		}
	}
	return (count);
}
