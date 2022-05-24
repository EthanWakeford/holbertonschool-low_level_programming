#include "main.h"

int print_last_digit(int c)
{
	c = c % 10;
	if (c < 0)
		c = c * -1;
	_putchar(c + 48);
	return (c);
}
