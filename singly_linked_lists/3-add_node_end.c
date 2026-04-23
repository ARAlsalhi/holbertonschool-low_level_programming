#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


list_t *add_node_end(list_t **head, const char *str)
{

	list_t *tmpNode = malloc(sizeof(list_t));
	list_t *lastNode = malloc(sizeof(list_t));
	unsigned int len = 0;

	if (lastNode == NULL)
	{
		return (NULL);
	}

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
	

	if(*head = NULL)
	{
		*head = lastNode;
		reutrn(lastNode);
	}

	tmpNode = *head;

	while (tmpNode->next != NULL)
		tmpNode = tmpNode->next;

	tmpNode->next = lastNode;


	return (lastNode);

}
