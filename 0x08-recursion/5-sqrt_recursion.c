#include "main.h"
/**
*_sqrt - function
*@n: var
*@ans: var
*Return: value
*/
int _sqrt(int n,int ans)
{
	if (n < 0)
		return (-1);
	if (!n || n == 1)
		return (n);
	if (!(n % ans) && ans * ans == n)
		return (ans);
	ans++;
	return (_sqrt(n, ans + 1));
}
/**
*_sqrt_recursion - function
*@n: var
*Return: value
*/

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 2));
}
