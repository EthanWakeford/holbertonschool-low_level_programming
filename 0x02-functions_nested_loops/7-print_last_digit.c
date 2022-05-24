#include "main.h"

int print_last_digit(int c)
{
	if (c < 48)
		c = -c;
	c = c % 10;
	_putchar(c + '0');
	return (c);
}
