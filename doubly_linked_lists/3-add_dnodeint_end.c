#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the head of the list
 * @n: value to store in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *lastnode = malloc(sizeof(dlistint_t));
	dlistint_t *tmp;

	if (lastnode == NULL)
		return (NULL);

	lastnode->n = n;
	lastnode->next = NULL;


	if (*head == NULL)
	{
		lastnode->prev = NULL;
		*head = lastnode;
		return (lastnode);
	}


	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;


	tmp->next = lastnode;
	lastnode->prev = tmp;

	return (lastnode);
}
