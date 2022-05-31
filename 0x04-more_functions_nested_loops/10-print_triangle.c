#include "main.h"

/**
*print_triangle - prints a triangle
*
*@size: size of triangle
*/

void print_triangle(int size)
{
	int x, y;

	for (x = 1; x <= size; x++)
		{
		for (y = 0; y < (size - x); y++)
			_putchar(' ');
		for (y = 0; y < x; y++)
			_putchar('#');
		_putchar('\n');
		}
	if (size <= 0)
		_putchar('\n');
}
