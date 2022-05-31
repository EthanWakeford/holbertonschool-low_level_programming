#include "main.h"

void print_number(int n)
{
	int curr;

	if (n < 0)
	{
		_putchar('-');
	}

	curr = (n % 10);
	if ((n / 10) != 0)
	{
		if (n < 0)
			print_number(n / -10);
		else
			print_number(n / 10);
	}
	if ( curr < 0)
		_putchar('0' + (-1 * curr));
	else
		_putchar('0' + curr);
/*	_putchar('0' + x);*/
}
