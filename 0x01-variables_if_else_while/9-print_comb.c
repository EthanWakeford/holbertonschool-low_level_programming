#include <stdio.h>

/**
 * main - print 0-9 with commas
 *
 * Return: none
 */

int main(void)
{
	int n;
	int x = '0';

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (x <= '8')
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');
	return (0);
}
