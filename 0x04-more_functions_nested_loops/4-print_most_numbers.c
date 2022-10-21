#include "main.h"

/**
*print_most_numbers - check a char
*
*Return: 0 or 2
*/
void print_most_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a == '2' || a == '4')
			continue;

		_putchar(a);
	}
	_putchar('\n');
}
