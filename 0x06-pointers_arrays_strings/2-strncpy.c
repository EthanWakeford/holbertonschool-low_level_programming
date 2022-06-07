#include "holberton.h"

/**
*_strncpy - copies one string to another to the nth element
*@dest: string to copy over
*@src: string to copy
*@n: how much to copy
*Return: always dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (i < n) && (src[i] != '\0'); i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
