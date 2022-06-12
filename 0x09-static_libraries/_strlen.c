#include "main.h"

/**
*_strlen - returns length of a string
*
*@s: string parameter
*Return: returns value x minus one
*/

int _strlen(char *s)
{
	int x = 0;
	int y;

	while (y)
		{
		y = s[x];
		x++;
		}
	return (x - 1);
}
