#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	int comma;

	if (ht == NULL)
		return;

	comma = 0;
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];

		while (temp != NULL)
		{
			if (comma == 1)
				printf(", ");

			printf("'%s': '%s'", temp->key, temp->value);
			comma = 1;
			temp = temp->next;
		}
	}

	printf("}\n");
}
