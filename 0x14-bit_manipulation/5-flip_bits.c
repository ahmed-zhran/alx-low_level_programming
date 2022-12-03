#include "main.h"

/**
 * flip_bits - the number of bits you would need to flip to get m
 * @n: var
 * @m: var
 * Return: value
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, ans = 0;

	for (i = 0; i < 31; i++)
		ans += ((n >> i) ^ (m >> i));

	return ans;
}
