#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head:pointer
 * @index: var
 * Return: value
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i = 0;
	listint_t *tmp = head;

	if (head == NULL)
		return (NULL);
	for (; i < index - 1 && tmp->next != NULL; i++)
		tmp = tmp->next;
	if (tmp == NULL || tmp->next == NULL)
		return (NULL);
	return (tmp->next);
