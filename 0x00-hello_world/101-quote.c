/*
 * File: 101-quote.c
 * Auth: Zhran
 */

#include <stdio.h>
/* more headers goes there */
#include <fcntl.h>
#include <unistd.h>
/**
 * main - prints exactly and that piece of art is useful"
 *                 - Dora Korpar, 2015-10-19
 *
 * Return: Always 0.
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
