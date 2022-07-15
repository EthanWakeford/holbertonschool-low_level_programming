#include "main.h"

/**
*print_binary - prints a number in binary
*@n: number to print
*/

void print_binary(unsigned long int n)
{
	int i;
	int arr[64];

	if (n == 0)
		_putchar('0');
	for (i = 0; n > 0; i++)
	{
		arr[i] = n % 2;
		n = n / 2;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(arr[i] + 48);
	}
}
