#include "lists.h"

/**
 * print_dlistint - prints all the elements of a linked list
 * @h: linked list of type dlistint_t to print
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
