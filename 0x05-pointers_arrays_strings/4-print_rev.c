#include "main.h"

/**
*print_rev - prints given string in reverse
*
*@s: string to be printed in reverse
*/

void print_rev(char *s)
{
	int x = 0;
	int y;

	while (s[x] != '\0')
		{
		x++;
		}
	for (y = x; y >= 0; y--)
		{
		_putchar(s[y]);
		}
	_putchar('\n');
}
