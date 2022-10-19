#include "main.h"
/**
 *  print_last_digit- a function that returns the last digit
 * of an integer
 * @i: integer input
 * Return: the last digit of i
 */
int print_last_digit(int i)
{
	int ans = (i % 10);

		if (ans < 0)
			ans = ans * -1;

	_putchar('0' + ans);
	return (ans);
}
