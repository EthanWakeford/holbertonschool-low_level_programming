#include "main.h"

/**
*more_numbers - prints (0 to 14) 10 times
*/

void more_numbers(void)
{
	int n, x;

	for (x = 0; x <= 9; x++)
		{
		for (n = 0; n <= 14; n++)
			{
			if (n > 9)
				{
				_putchar((n / 10) + 48);
				}
			_putchar((n % 10) + 48);
			}
		_putchar('\n');
		}
}
