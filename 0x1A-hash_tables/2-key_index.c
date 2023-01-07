#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 *
 * @key: key to generate an index for
 * @size: size of the array of the hash table
 * Return: the index at which the key/value pair should
 * be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	if (key == NULL || size == 0)
		return (0);

	idx = hash_djb2(key) & 0x7FFFFFFF;
	idx = idx % size;

	return (idx);
}
