#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head - pointer to the root node of the list
 * @n: integer to use as data of new node
 * 
 * Return: address of the new node or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	temp = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}

	return (new);
}
