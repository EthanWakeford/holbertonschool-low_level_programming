#include "main.h"

/**
*_strlen_recursion - returns length of a string
*@s: string
*Return: i
*/

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i = 1 + _strlen_recursion(++s);
	}
	else
		i = 0;
	return (i);
}
