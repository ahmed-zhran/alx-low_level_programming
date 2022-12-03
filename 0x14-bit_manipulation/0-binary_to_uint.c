#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: var
 * Return: value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ans = 0, i = 2, len = 0;

	if (!b)
		return (0);
	for (; *(b + len) != '\0'; len++)
		;
	for (; *(b + --len) != '\0'; i *= 2)
	{
		if (*(b + len) == '0' || *(b + len) == '1')
			*(b + len) & 1 ? ans += i : ans += 0;
		else
			return (0);
	}
	return (ans);
}
