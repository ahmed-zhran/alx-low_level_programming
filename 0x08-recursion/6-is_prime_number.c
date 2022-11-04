#include "main.h"
/**
*_prime - function
*@n: var
*@k: var
*Return: value
*/
int _prime(int n, int k)
{
	if (n == 2)
		return (1);
	if (n < 2 || !(n % 2))
		return (0); 
	if (n % k == 0)
		return (0);
	if (k * k <= n) 
		return (_prime(n, k + 1));
	return (1);
}
/**
*is_prime_number - function
*@n: var
*Return: value
*/

int is_prime_number(int n)
{
	return (_prime(n, 2));
}
