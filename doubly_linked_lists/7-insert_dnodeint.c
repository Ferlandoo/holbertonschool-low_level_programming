#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the first node in the list
 * @idx: index of the list where the new node should be added
 * @n: data to insert in that new node
 * Return: pointer to the new node, or NULL if it fails
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new->next = temp->next;
	new->prev = temp;
	temp->next->prev = new;
	temp->next = new;

	return (new);
}
