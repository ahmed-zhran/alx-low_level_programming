#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0.
 */
int main(void)
{
int c = 48;
while (c <= 'f')
{
	if (c == 58)
		c = 97;
	putchar(c++);
}
putchar('\n');
	return (0);
}
