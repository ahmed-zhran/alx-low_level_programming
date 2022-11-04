#include "main.h"

/**
 * _strlen_recursion - size
 * @s: pointer to string params
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * is_p - palindrome
 * @s: pointer to string
 * @l: position
 * Return: boolena
 */

int is_p(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}
	if (s == (s+l))
		return (1);
	if (*s == *(s + l))
	{
		return (is_p(s + 1, l - 1));
	}
	return (0);
}

/**
 * is_palindrome - palindrome
 * @s: pointer to string
 * Return: recursion
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	
	return (is_p(s, len - 1));
}
