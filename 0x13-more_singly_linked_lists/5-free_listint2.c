#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: double pointer to root node of listint_t struct
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *curr = *head;

	while (curr != NULL)
	{
		listint_t *prev = curr;

		curr = curr->next;
		free(prev);
	}

	*head = NULL;
}
