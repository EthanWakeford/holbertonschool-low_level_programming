#include "main.h"

/**
*_strchr - locates character in a string
*@s: string
*@c: character
*Return: pointer to first occurence of c, NULL if character not foudn
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	i++;
	}
	return ('\0');
}
