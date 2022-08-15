#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - function that adds new node at beginning of a list
 * @head: name of the list
 * @n: the number of nodes
 * Return: the number of nodes.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = *head;
	*head = add;

	return (add);
}
