#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the list to count
 * Return: length of list pointed to by h
 */
size_t listint_len(const listint_t *h)
{
	size_t list_len = 0;

	while (h)
	{
		h = h->next;
		list_len++;
	}

	return (list_len);
}
