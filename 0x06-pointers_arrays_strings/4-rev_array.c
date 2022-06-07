#include "holberton.h"

/**
*reverse_array - reverses an array of integers
*@a: array
*@n: number of elements in array
*/

void reverse_array(int *a, int n)
{
	int i, tmp, mid;
	
	n = n-1;
	mid = n / 2;
	for (i = 0; i <= mid; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		n--;
	}
}
