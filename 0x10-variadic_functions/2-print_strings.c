#include "variadic_functions.h"

/**
*print_strings - prints out strings
*@separator: separator between strings
*@n: num of optional args
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	if (n > 0)
	{
		va_start(ap, n);
		str = va_arg(ap, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		for (i = 1; i < n; i++)
		{
			if (separator != NULL)
				printf("%s", separator);
			str = va_arg(ap, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		}
	}
	putchar('\n');
}
