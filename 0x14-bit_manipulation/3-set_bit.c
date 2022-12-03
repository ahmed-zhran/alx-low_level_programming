#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: var
 * @index: var
 * Return value
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return -1;
	return *n |= (1 << index), 1;
}
