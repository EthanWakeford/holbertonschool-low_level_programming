#include <stdio.h>

/**
* main - asdf
*
* Return: asdfaf
*/

int main(void)
{
	int n;
	int x;

	for (n = '0'; n <= '9'; n++)
	{
		for (x = '0'; x <= '9'; x++)
		{
			if (n < x)
			{
				putchar(n);
				putchar(x);
				if (n < '8')
				{
					putchar(',');
					putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
