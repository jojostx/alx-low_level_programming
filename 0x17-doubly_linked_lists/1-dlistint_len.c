#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a doubly linked list
 * @h: pointer to node in dlistint_t list
 *
 * Return: number of element in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int n = 0;

	if (h == NULL)
		return (n);

	while (h->prev)
		h = h->prev;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
