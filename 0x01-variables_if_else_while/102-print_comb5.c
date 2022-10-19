#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
int i = 0, j, k;
while (i <= 99)
{
	j = i + 1;
	while (j <= 99)
	{
		if (i < 10)
		{
			k = 0;
		}
		else
		{
			k = i / 10;
		}
		putchar(k + '0');
		putchar((i % 10) + '0');
		putchar(' ');
		if (j < 10)
		{
			k = 0;
		}
		else
		{
			k = j / 10;
		}
		putchar(k + '0');
		putchar((j % 10) + '0');
		if (i < 98)
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
