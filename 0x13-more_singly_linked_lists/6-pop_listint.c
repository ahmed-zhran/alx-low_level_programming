#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked lis
 * @head: var
 * Return: value
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int n;
	
	if (temp == NULL)
		return (0);
	n = (*temp)->n;
	*head = ((*head)->next);
	free(temp);
	return (n);
}
