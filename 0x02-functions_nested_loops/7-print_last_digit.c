#include "main.h"

int print_last_digit(int c)
{
	if (c < 0)
		c = -c;
	c = c % 10;
	return (c);
}
