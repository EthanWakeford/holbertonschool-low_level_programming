#include "holberton.h"

/**
*string_toupper - turns all lowercase characters into uppercase in a string
*@a: the string
*Return: a
*/

char *string_toupper(char *a)
{
	int i;
	int len = 0;

	while (a[len] != '\0')
	{
		len++;
	}
	for (i = 0; i <= len; i++)
	{
		if ((a[i] >= 97) && (a[i] <= 122))
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}
