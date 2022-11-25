#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: var
 * Return: value
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;
	list_t *cur = h;

	if (h == NULL)
		return (0);
	while (1)
	{

		n++;
		if (cur->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", cur->len, cur->str);
		if (cur->next == NULL)
			break;
		cur = cur->next;
	}

	return (n);
}
