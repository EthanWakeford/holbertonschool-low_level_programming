#include "main.h"

/**
*puts_half - prints second half of string
*@str: string
*/

void puts_half(char *str)
{
	int len = 0;
	int x;

	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
		x = len / 2;
	else
		x = (len - 1) / 2;
	for (x = (len - x); x <= len; x++)
		_putchar(str[x]);
	_putchar('\n');
}
