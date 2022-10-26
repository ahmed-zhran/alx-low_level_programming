#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * generates random valid passwords for the program 101-crackme.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand();
	printf("%i\n", n);
	return (0);
}
