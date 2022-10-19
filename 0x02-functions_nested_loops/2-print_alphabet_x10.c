#include "main.h"
/**
 * print_alphabet_x10 - a function that prints the alphabet
 *		10 times, in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char n;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
