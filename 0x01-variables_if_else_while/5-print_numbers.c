#include <stdio.h>

/**
 * main - prints 0-9
 *
 * Return: none
 */

int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++){
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
