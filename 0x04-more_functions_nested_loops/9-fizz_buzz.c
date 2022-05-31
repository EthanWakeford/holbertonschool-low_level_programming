#include <stdio.h>

/**
*fizz_buzz = does fizzbuzz stuff
*/

void main(void)
{
	int x;
	char fizz[] = "Fizz";
	char buzz[] = "Buzz";

	for (x = 1; x <= 100; x++)
		{
		if (x % 3 == 0)
			printf("%s", fizz);
		if (x % 5 == 0)
			printf("%s", buzz);
		if ((x % 3 != 0) && (x % 5 != 0))
			printf("%d", x);
		if (x < 100)
			putchar(' ');
		}
	putchar('\n');
}
