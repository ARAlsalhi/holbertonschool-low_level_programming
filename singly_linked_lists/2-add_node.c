#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the head of the list
 * @str: string to duplicate
 *
 * Return: address of the new node, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmpNode;
	unsigned int len = 0;

	tmpNode = malloc(sizeof(list_t));
	if (tmpNode == NULL)
	{
		return (NULL);
	}

	tmpNode->str = strdup(str);
	if (tmpNode->str == NULL)
	{
		free(tmpNode);
		return (NULL);
	}

	while (str[len] != '\0')
		len++;

	tmpNode->len = len;
	tmpNode->next = *head;
	*head = tmpNode;

	return (tmpNode);
}
