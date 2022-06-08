#include "main.h"

/**
*_puts_recursion - prints a string
*@s: string to print
*/

void _puts_recursion(char *s)
{
	if (*s != '\n')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	_putchar('\n');
}
