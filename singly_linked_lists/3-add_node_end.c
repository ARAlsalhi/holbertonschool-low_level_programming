#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head of the list
 * @str: string to duplicate
 *
 * Return: address of the new node, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lastNode;
	list_t *tmp;
	unsigned int len = 0;

	lastNode = malloc(sizeof(list_t));
	if (lastNode == NULL)
		return (NULL);

	lastNode->str = strdup(str);
	if (lastNode->str == NULL)
	{
		free(lastNode);
		return (NULL);
	}

	while (str[len] != '\0')
		len++;

	lastNode->len = len;
	lastNode->next = NULL;

	if (*head == NULL)
	{
		*head = lastNode;
		return (lastNode);
	}

	tmp = *head;

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = lastNode;

	return (lastNode);
}
