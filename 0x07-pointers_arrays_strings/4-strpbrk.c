#include "main.h"

/**
*strpbrk - searches a string for any of a set of bytes
*@s: string
*@accept: bytes to search
*Return: pointer to the byte in s that matches in accept, NULL no found
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++
	}
	return (NULL);
}
