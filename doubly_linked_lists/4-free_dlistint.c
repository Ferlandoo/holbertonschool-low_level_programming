#include "lists.h"

/**
 * free_dlistint - frees a linked list
 * @head: dlistint_t list to be freed
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
