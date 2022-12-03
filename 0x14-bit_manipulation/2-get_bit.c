#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: var
 * @index: var
 * Return: value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return index < 32 ? (int)((n >> index) & 1) : -1;
}
