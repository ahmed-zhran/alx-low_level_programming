#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: Always 0.
 */
int main(void)
{
char c = 'z';
while (c >= 'a')
{
	putchar(c--);
}
putchar('\n');
	return (0);
}
