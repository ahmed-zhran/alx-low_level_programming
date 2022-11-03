#include "main.h"
/**
*factorial - function
*@n: number
*Return: integer
*/
int factorial(int n)
{
	if (n < 0)
		return (0);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
