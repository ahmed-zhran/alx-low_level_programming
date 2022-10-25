#include "main.h"
/**
*swap_int - swap to pointers
*@a: pointer to 1st pointer
*@b: pointer to 2nd pointer
*
*Return
*/
void swap_int(int *a, int *b)
{
	int *tmp = b;
	int tmpv = *tmp;

	b = a;
	*a = tmpv;
}
