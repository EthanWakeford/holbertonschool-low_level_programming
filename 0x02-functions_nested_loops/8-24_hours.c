#include "main.h"

/**
*jack_bauer - prints time 00:00 to 23:59
*
*Return: void
*/

void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;
	int e = '9';

	for (a = '0'; a <= '2'; a++)
	{
		for (b = '0'; b <= e; b++)
			for (c = '0'; c <= '5'; c++)
				for (d = '0'; d <= '9'; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}
		if (a == '1')
			e = '3';
	}
}
