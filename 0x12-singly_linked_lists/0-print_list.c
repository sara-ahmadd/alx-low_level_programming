#include "lists.h"
/**
 * _strlen - print length of string
 * @str: the string
 * Return: length
 */

int _strlen(char *str)
{
	int i = 0;

	if (!str)
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
	unsigned int counter = 0;
i
	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		counter++;
	}
	return (counter);
}
