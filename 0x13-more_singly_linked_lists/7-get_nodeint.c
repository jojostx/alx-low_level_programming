#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a given index of a listint_t list
 * @index: index of node to return
 * 
 * Return: listint_t node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL && i < index; i++)
	{
		head = head->next;
	}

	return (head);
}
