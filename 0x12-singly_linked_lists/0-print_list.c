#include "lists.h"
/**
 * _strlen - print length of string
 * @str: the string
 * Return: length
 */

int _strlen(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		return (0);
	}
	while (*str++)
	{
		i++;
	}
	return (i);
}
/**
 * print_list - print number of nodes in the list
 * @h: the head node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	unsigned int counter = 0;

	while (current != NULL)
	{
		printf("[%d]%s\n", _strlen(current->str),
				current->str == NULL ? "(nil)" : current->str);
		current = current->next;
		counter++;
	}
	return (counter);
}
