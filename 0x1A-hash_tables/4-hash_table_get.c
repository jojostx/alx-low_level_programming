#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 *
 * @ht: the hash table you want to look into
 * @key: key you are looking for
 *
 * Return: value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *tmp;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	i = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[i];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}
