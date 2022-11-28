#include "lists.h"

/**
 * add_nodeint - a new node at the beginning of a listint_t list.
 * @head: pointer
 * @n: var
 * Return: value
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(*head));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
