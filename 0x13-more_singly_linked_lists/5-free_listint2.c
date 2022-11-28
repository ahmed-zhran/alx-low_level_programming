#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer
 * Return: value
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;
	if (head == NULL)
		return;
	while ((tmp = *head) != NULL)
	{
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
