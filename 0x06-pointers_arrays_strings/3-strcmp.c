#include "holberton.h"

/**
*_strcmp - compares 2 strings
*@s1: string 1 to compare
*@s2: string 2 to compare
*Return: difference
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	while ((s1 != '\0' && s2 != '\0') && s1 == s2)
	{
		s1++
		s2++
	}
	i = s1 - s2
	return (i);
}
