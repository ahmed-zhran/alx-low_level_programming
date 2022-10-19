#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - prints the alphabet in lower case and uppercase
 *
 * Return: Always 0.
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
	putchar(c);
	c++;
}
c = 'A';
while (c <= 'Z')
{
	putchar(c);
	c++;
}
printf("\n");
	return (0);
}
