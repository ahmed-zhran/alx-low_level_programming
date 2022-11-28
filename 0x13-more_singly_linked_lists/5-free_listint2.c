#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer
 * Return: value
 */

void free_listint2(listint_t **head)
{
	listint_t **tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
