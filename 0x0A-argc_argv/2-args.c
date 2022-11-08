i/*
 * File: 2-args.c
 * Auth: Zhran
 */

#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 * @argc: var
 * @argv: var
 * Return: value
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%S\n", argv[i]);
	}
	return (0);
}
