#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to head node
 * @idx: index to insert new node at
 * @n: data value of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *t = *h;
	unsigned int i = 0;

	if (t == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	while (t->prev != NULL)
		t = t->prev;

	while (t)
	{
		if (i == idx)
		{
			new->n = n;
			new->next = t;

			if (t->prev != NULL)
			{
				t->prev->next = new;
				new->prev = t->prev;
			}
			else
				new->prev = NULL;

			t->prev = new;

			break;
		}
		t = t->next;
		i++;
	}

	return (new);
}
