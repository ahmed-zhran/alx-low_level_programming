#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - prints the digit numbers of base 10
 *
 * Return: Always 0.
 */
int main(void)
{
char c = '0';
while (c <= '9')
{
	putchar(c++);
}
printf("\n");
	return (0);
}
