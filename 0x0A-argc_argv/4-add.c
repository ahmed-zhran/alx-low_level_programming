/*
 * File: 2-args.c
 * Auth: Zhran
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: var
 * @argv: var
 * Return: value
 */

int main(int argc, char *argv[])
{
	int sum = 0, i = 1, j;

	while (argc > 1 && i < argc)
	{
		for (j = 0; *(argv[i] + j) != '\0'; j++)
		{
			if (*(argv[i] + j) >= '0' && *(argv[i] + j) <= '9')
				continue;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]), i++;
	}

	printf("%d\n", sum);
	return (0);
}
