#include "hash_tables.h"

/**
 * key_index - getting an index to which a key is placed in hash table.
 * @key: key leading to index required.
 * @size: The tota size of number of hash table.
 * Return: The obtaine index key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
