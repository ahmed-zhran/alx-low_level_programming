/*
 * File: 1-args.c
 * Auth: Zhran
 */

#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: var
 * @argv: var
 * Return: value
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
