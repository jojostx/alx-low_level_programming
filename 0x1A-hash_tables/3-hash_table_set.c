#include "hash_tables.h"

/**
 * add_n_hash - adds a node at the beginning of a hash at a given index
 *
 * @head: head of the hash linked list
 * @key: key of the hash
 * @value: value to store
 * Return: pointer to inserted node or null if fail
 */
hash_node_t *add_n_hash(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *tmp;

	tmp = *head;

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (tmp);
		}

		tmp = tmp->next;
	}

	tmp = malloc(sizeof(hash_node_t));

	if (tmp == NULL)
		return (NULL);

	tmp->key = strdup(key);
	tmp->value = strdup(value);
	tmp->next = *head;
	*head = tmp;

	return (*head);
}

/**
 * hash_table_set - function that adds an element to the hash table
 * In case of collision, the new node is added at the beginning of the list
 *
 * @ht: the hash table you want to add or update the key/value to
 * @key: key. key can not be an empty string
 * @value: value associated with the key. value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	i = key_index((unsigned char *)key, ht->size);

	if (add_n_hash(&(ht->array[i]), key, value) == NULL)
		return (0);

	return (1);
}
