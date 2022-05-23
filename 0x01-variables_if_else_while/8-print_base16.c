#include <stdio.h>

/**
 * main - print all base 16 numbers
 *
 * Return: none
 */

int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
