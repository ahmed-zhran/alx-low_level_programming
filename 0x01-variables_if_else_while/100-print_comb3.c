#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: Always 0.
 */
int main(void)
{
int i = '0', j;
while (i <= '9')
{
	j = i + 1;
	while (j <= '9')
	{
		putchar(i);
		putchar(j);
		if (i < '8')
		{
			putchar(',');
			putchar(' ');
		}
		j++;
	}
	i++;
}
putchar('\n');
	return (0);
}
