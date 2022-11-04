#include "main.h"
/**
*_sqrt_recursion - function
*@n: var
*Return: value
*/
int ans = 2;

int _sqrt_recursion(int n)
{
	if (!n || n == 1)
		return n;
	else if (!(n % ans) && ans * ans = n)
		return ans;
	ans++;
	return (_sqrt_recursion(n));
}
