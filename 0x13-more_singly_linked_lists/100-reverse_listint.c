#include "lists.h"

/**
 * reverse_list_recursive_internal - reverses a listint_t linked list.
 * @head: root node of listint_t linked list
 * @node: node
 *
 * Return: a pointer to the first node of the reversed list
 */
void reverse_list_recursive_internal(listint_t **head, listint_t *node)
{
	if (node->next == NULL)
	{
		*head = node;
		return;
	}
	reverse_list_recursive_internal(head, node->next);
	node->next->next = node;
	node->next = NULL;
}

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: root node of listint_t linked list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	if (*head == NULL)
		return (NULL);

	reverse_list_recursive_internal(head, *head);
	return (*head);
}
