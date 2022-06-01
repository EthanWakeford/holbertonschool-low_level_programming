#include "main.h"

/**
*puts2 - prints every other character of a string
*@str: string
*/

void puts2(char *str)
{
	int len = 0;
	int y;

	while (str[len] != '\0')
		len++;
	for (y = 0; y < len; y += 2)
		_putchar(str[y]);
	_putchar('\n');
}
