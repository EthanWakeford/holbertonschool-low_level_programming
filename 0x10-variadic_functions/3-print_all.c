#include "variadic_functions.h"

/**
*print_all - prints all kinds of data types
*@format: format of data types
*/

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	int is_not_first = 0;

	va_start(ap, format);
	while (format && format[i] != '\0')
	{
		if (is_not_first)
			printf(", ");
		is_not_first = 1;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				printf("%s", va_arg(ap, char *));
				break;
			default:
			{
				is_not_first = 0;
				break;
			}
		}
	i++;
	}
	putchar('\n');
}
