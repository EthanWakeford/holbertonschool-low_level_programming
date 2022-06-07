#include "holberton.h"

/**
*reverse_array - reverses an array of integers
*@a: array
*@n number of elements in array
*/

void reverse_array(int *a, int n)
{
	int i, tmp, mid;

	mid = n / 2;
	for (i = 0; i <= mid; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		n--;
	}
}
