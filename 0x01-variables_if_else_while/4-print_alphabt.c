#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - prints the alphabet in lower case except e & q
 *
 * Return: Always 0.
 */
int main(void)
{
char c = 'a' - 1;
while (++c <= 'z')
{
	if (c == 'e' || c == 'q')
		continue;
	putchar(c);
}
printf("\n");
	return (0);
}
