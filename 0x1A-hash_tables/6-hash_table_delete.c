#include "hash_tables.h"

/**
 * free_node - function that frees a hash_node_t [linked_list].
 * @hn: pointer to hash node
 *
 * loop through array and free all non-null elements:
 * if the element is a linked list, free all linked nodes
 * use a function that frees a linked list.
 * otherwise, free the value and then the key and then the element
 *
 * Return: Nothing
 */
void free_node(hash_node_t *hn)
{
	hash_node_t *tmp;

	if (hn == NULL)
		return;

	tmp = hn->next;

	free(hn->key);
	free(hn->value);
	free(hn);

	free_node(tmp);
}

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: pointer to hash table
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		free_node(ht->array[i]);
	}

	/* free the hash_table's array itself */
	free(ht->array);
	/* free the hash_table itself */
	free(ht);
}
