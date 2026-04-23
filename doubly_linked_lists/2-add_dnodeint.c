#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to the head of the list
 * @n: value to store in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *startNode = malloc(sizeof(dlistint_t));

	if (startNode == NULL)
		return (NULL);

	startNode->n = n;
	startNode->prev = NULL;
	startNode->next = *head;

	if (*head != NULL)
		(*head)->prev = startNode;

	*head = startNode;

	return (startNode);
}
