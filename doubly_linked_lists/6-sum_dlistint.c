#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a linked list
 * @head: linked list of type dlistint_t to sum
 * Return: sum of all the data (n) of a linked list
 */

int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
