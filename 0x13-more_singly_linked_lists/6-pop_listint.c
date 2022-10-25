#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 *  @head: head of a list
 *
 *  Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *h;
	listint_t *curr;
	int head_data = 0;

	if (*head != NULL)
	{
		curr = *head;

		head_data = curr->n;

		h = curr->next;

		free(curr);

		*head = h;
	}

	return (head_data);
}
