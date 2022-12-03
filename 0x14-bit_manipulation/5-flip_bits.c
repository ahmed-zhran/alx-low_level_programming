#include "main.h"

/**
 * flip_bits - the number of bits you would need to flip to get m
 * @n: var
 * @m: var
 * Return: value
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int ans = 0;

	for (; n || m; n >>= 1, m >>=1)
		ans += ((n & 1) != (m & 1));

	return (ans);
}
