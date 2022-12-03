#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: var
 * Return: value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ans = 0, i = 0;

	if (!b)
		return (0);
	for (; *(b + i) != '\0'; i++)
	{
		if (*(b + i) == '0' || *(b + i) == '1')
			ans += (int) (*(b + i) - 48) * pow(2, i);
		else
			return (0);
	}
	return (ans);
}
