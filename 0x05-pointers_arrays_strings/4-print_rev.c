#include "main.h"
/**
*print_rev - print
*@s: var
*/
void print_rev(char *s)
{
	int len = _strlen(s);

	while (len != -1)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}
