#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *first)
{
    size_t n = 0;
    while (first != NULL)
    {
        n++;
        if (first->str == NULL)
            printf("[%d] %s\n", 0, "(nil)");
        else
            printf("[%d] %s\n", first->len, first->str);
        cur = cur->next;
    }

    return (n);
}
