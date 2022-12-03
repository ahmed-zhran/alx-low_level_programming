#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: var
 * @index: var
 * Return: value
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);
	return (*n &= ~(1 << index), 1);
}
