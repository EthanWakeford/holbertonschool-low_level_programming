#include "main.h"

/**
*print_alphabet_x10 - print alphabet 10 times
*
*Return: none
*/

void print_alphabet_x10(void)
{
	int i;
	int c;

	for (i = '0'; i <= '9'; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
