#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t.
 * @head: pointer
 * @idx: var
 * @n: var
 * Return: value
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = *head;

	if (*head == NULL)
		return;

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	for (; i < index - 1 && tmp != NULL; i++)
		tmp = tmp->next;
	if (tmp == NULL || tmp->next == NULL)
		return (-1);
	free(tmp->next);
	tmp->next = tmp->next->next;
	return (1);
}
