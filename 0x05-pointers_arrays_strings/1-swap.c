#include "main.h"

/**
*swap_int - swa[s the value of 2 integers
*
*@a: two one to be swapped
*@b: int 2
*/

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
