#include "main.h"

int print_last_digit(int c)
{
	int i;

	if (c < 0)
		c = -c;
	i = c % 10;
	_putchar(i + '0');
	return (i);
}
