#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked lists
 * @h: linked list of type dlistint_t to traverse
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
