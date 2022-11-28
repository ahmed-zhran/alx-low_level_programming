#include "lists.h"

/**
 * add_nodeint_end - a new node at the end of a listint_t list.
 * @head: pointer
 * @n: var
 * Return: value
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(*head));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (*head != NULL)
	{
		*head = (*head)->next;
	}
	(*head) = new;

	return (*head);
}
