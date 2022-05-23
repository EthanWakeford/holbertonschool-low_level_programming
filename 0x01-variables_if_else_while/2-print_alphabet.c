#include <stdio.h>

/**
 * main - puts alphabet
 *
 * Return: none
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
