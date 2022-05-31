#include "main.h"

/**
*print_most_numbers - prints 0-9 but not 2 or 4
*/

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		{
		if (n != 2 && n != 4)
			_putchar(n + 48);
		}
	_putchar('\n');
}
