#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer
 * @idx: var
 * @n: var
 * Return: value
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tmp = *head, *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (; i < idx - 1 && tmp != NULL; i++)
		tmp = tmp->next;
	if (tmp == NULL)
		return (NULL);
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
