/*
 * File: 2-args.c
 * Auth: Zhran
 */

#include <stdio.h>

/**
 * main - multiplies two numbers.
 * @argc: var
 * @argv: var
 * Return: value
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
