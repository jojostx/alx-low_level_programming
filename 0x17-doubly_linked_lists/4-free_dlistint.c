#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to head node
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur;

	if (head != NULL)
	{
		while (head->prev != NULL)
		{
			head = head->prev;
		}

		cur = head->next;

		while (head != NULL)
		{
			free(head);
			head = cur;

			if (cur != NULL)
				cur = cur->next;
		}
	}
}
