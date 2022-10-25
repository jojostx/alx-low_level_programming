#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to root node of listint_t list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	if (head == NULL)
		return;

	aux = head->next;

	free(head);
	free_listint(aux);
}
