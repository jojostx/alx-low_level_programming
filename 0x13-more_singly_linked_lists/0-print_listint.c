#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * and returns the number of nodes
 * @h: list to print
 *
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (num);
}
