#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - prints all possible different combinations of three digits.
 *
 * Return: Always 0.
 */
int main(void)
{
int i = '0', j, k;
while (i <= '9')
{
	j = i + 1;
	while (j <= '9')
	{
		k = j + 1;
		while (k <= '9')
		{
			putchar(i);
			putchar(j);
			putchar(k);
			if (i < '7')
			{
				putchar(',');
				putchar(' ');
			}
			k++;
		}
		j++;
	}
	i++;
}
putchar('\n');
	return (0);
}
