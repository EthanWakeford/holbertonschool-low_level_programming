#include <stdio.h>

/**
 * main - alphabet backwards
 *
 * Return: none
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
