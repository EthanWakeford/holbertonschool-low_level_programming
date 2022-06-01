#include <stdio.h>
#include "main.h"

/**
*print_array - prints n elements of an array
*@a: array
*@n: amount to print
*/

void print_array(int *a, int n)
{
	int len = 0;
	int x;

	while (a[len] != '\0')
		len++;
	for (x = 0; x < len && x < n; x++)
		{
		if (x < len - 1 && x < n - 1)
			printf("%d, ", a[x]);
		else
			printf("%d\n", a[x]);
		}
}
