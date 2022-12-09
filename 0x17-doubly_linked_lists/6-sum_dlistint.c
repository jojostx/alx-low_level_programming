#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of
 * a dlistint_t linked list
 *
 * @head: pointer to head node
 *
 * Return: sum of the data of nodes, if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
