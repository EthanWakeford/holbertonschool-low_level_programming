#include "main.h"

/**
*binary_to_uint - converts binary to u int
*@b: points to a string of 1s and 0s
*Return: id
*/

unsigned int binary_to_uint(const char *b)
{
	long bin = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if ((b[i] != '1') & (b[i] != '0'))
			return (0);
	}
	return (bin);
}
