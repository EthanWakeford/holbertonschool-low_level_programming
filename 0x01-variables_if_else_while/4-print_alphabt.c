#include <stdio.h>

/**
 * main - prints laphabet without q and e
 *
 * Return: none
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'e' && ch != 'q')
			putchar(ch);
			putchar('\n');

	return (0);
}
