#include "hash_tables.h"

/**
 * hash_djb2 - function that generates a random number through
 * a string given (hash number)
 *
 * @str: the string use for the hash
 * Return: the total hash number calculated
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int counss;

	hash = 5381;
	while ((counss = *str++))
	{
		hash = ((hash << 5) + hash) + counss;
	}
	return (hash);
}
