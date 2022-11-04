#include "main.h"
/**
 * _strlen_recursion - size
 * @s: var
 * Return: int
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
 * @s: var
 * @l: var
 * Return: int
 */

int is_p(char *s, int l)
{
	if (l < 1)
		return (1);
	if (*s == *(s + l))
	{
		return (is_p(s + 1, l - 2));
	}
	return (0);
}

/**
 * is_palindrome - palindrome
 * @s: var
 * Return: int
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	
	if(len <= 1)
		return (1);
	return (is_p(s, len-1));
}

