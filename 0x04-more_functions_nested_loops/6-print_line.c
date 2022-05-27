#include "main.h"

/**
*print_line - prints underscore input num of times
*@n: num
*/

void print_line(int n)
{
	int x;

	for (x = 1; x <= n; x++)
		_putchar('_');
	_putchar('\n');
}
