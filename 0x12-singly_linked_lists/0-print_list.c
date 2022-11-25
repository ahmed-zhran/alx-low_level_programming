#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @first: var
 * Return: value
 */

size_t print_list(list_t *first)
{
	int n = 0;
	list_t *cur = first;

	while (1)
	{
		n++;
		if (cur -> str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", cur -> len, cur -> str);
		if (cur -> next == NULL)
			break;
		cur = cur->next;
	}

	return (n);
}
