#include "main.h"

/**
*print_last_digit - prints last digit twice idk
*
*@c: integer
*Return: last digit
*/

int print_last_digit(int c)
{
	c = c % 10;
	if (c < 0)
		c = c * -1;
	_putchar(c + 48);
	return (c);
}
