#include "lists.h"

/**
 * add_nodeint_end - a new node at the end of a listint_t list.
 * @head: pointer
 * @n: var
 * Return: value
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t)), *tmp = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;

	return (*head);
}
