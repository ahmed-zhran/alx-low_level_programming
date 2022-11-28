#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer
 * Return: value
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h != Null)
	{
		n++;
		h = h->next;
	}
	return (n);
}
