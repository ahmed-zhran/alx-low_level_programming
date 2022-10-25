#include "main.h"
/**
*reset_to_98 - reset the value of a pointer to 98
*@n: pointer to int
*
*Return
*/
void swap_int(int *a, int *b)
{
	int *tmp = b;
	b = a;
	a = tmp;
}
