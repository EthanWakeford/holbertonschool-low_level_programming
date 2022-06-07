#include "holberton.h"

/**
*_strcmp - compares 2 strings
*@s1: string 1 to compare
*@s2: string 2 to compare
*Return: 15 if s1 > s2, -15 if s1 < s2, 0 otherwise
*/

int _strcmp(char *s1, char *s2)
{
	if (s1 > s2)
		return (15);
	else if (s2 > s1)
		return (-15);
	else
		return (0);
}
