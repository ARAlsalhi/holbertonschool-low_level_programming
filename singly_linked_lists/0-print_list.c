#include <stdio.h>
#include "lists.h"



/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the first node
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{

	size_t nodeCountNum = 0;

	while (h != NULL)
	{
		list_t tmpNod = malic

		if (h->str == NULL)
		{
			printf("print[0] (nil)\n");
		}

		else
		{
			printf("-> %lu elements %s\n", h->str, h->len);
			h = h->next;
			nodeCountNum++;
		}

		return (nodeCountNum);
	}
}
