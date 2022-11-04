#include "main.h"
/**
*_sqrt_recursion - function
*@n: var
*Return: value
*/
int _sqrt_recursion(int n, int ans = 2)
{
	if (!n || n == 1)
		return n;
	else if (!(n % ans) && ans * ans = n)
		return ans;
	return (_sqrt_recursion(n, x + 1));
}
