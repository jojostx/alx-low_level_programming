#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: root pointer
 *
 * Return: The address of the node where the loop starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast_ptr = head;
	listint_t *slow_ptr = head;

	if (head == NULL)
		return (NULL);

	while (!slow_ptr && !fast_ptr && fast_ptr->next != NULL)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		if (slow_ptr == fast_ptr)
			return (fast_ptr);
	}
	return (NULL);
}
