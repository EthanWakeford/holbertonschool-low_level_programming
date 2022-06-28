#include "variadic_functions.h"

/**
*print_numbers - prints out numbers
*@separator: string for separator betwenn numbers
*@n: num of optional args
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n > 0)
	{
		va_start(ap, n);
		printf("%d", va_arg(ap, int));
		for (i = 1; i < n; i++)
		{
			if (separator == NULL)
				printf("%d", va_arg(ap, int));
			else
				printf("%s%d", separator, va_arg(ap, int));
		}
	}
	putchar('\n');
}
