#include "main.h"

/**
*_strncat - concatenates one string to another to the nth element
*@dest: string to be added onto
*@src: string to be concatenated
*@n: how much to cat
*Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; (i < n) && (src[i] != '\0'); i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
