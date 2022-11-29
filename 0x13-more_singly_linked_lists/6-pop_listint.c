#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked lis
 * @head: var
 * Return: value
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	
	if (temp == NULL)
		return (0);
	*head = ((*head)->next);
	free(temp);
	return ((*head)->n);
}
