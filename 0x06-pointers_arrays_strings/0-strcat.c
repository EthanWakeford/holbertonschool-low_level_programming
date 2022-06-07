#include "holberton.h"

/**
*_strcat - concatenates src to dest
*@dest: dest string
*@src: source string
*Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int s = 1;

	while (dest[i] != '\0')
	{
		i++;
	}
	dest[i] = src[0];
	i++;
	for (s = s; src[s] != '\0'; s++)
	{
		dest[i] = src[s];
		i++;
	}
	i++;
	dest[i] = src[s];
	return (dest);
}
