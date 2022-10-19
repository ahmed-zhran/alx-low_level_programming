#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
int c = 48;
while (c < 58)
{
	putchar(c++);
	if (c <= 57)
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
	return (0);
}
