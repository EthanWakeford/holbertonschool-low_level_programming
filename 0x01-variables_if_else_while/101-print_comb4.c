#include <stdio.h>

/**
*main - print possible 3 digit combinations
*
*Return: none
*/

int main(void)
{
	int x;
	int y;
	int z;

	for (x = '0'; x <= '7'; x++)
	{
		for (y = '0'; y <= '8'; y++)
		{
			for (z = '0'; z <= '9'; z++)
			{
				if ((x < y) && (y < z))
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x < '7')
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
