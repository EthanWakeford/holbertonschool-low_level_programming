#include "variadic_functions.h"

/**
*print_all - prints all kinds of data types
*@format: format of data types
*/

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *separator = "";
	char *str;

	va_start(ap, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(ap, int));
				separator = ", ";
				break;
			case 'i':
				printf("%s%d", separator, va_arg(ap, int));
				separator = ", ";
				break;
			case 'f':
				printf("%s%f", separator, va_arg(ap, double));
				separator = ", ";
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					printf("%s(nil)", separator);
				else
					printf("%s%s", separator, str);
				separator = ", ";
				break;
		}
	i++;
	}
	putchar('\n');
}
