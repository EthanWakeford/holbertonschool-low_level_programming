#include "holberton.h"

/**
*cap_string - capitalizes each word
*@s: the string
*Return: s
*/

char *cap_string(char *s)
{
	int i;
	int mem = 1;
	char sep[13] = " \t\n,;.!?\"(){}";

	while (*s)
	{
		for (i = 0; i < 13; i++)
		{
			if (*s == sep[i])
			{
				mem = 1;
			}
		}
		if (mem == 1)
		{
			if (*s <= 'z' && *s >= 'a')
			{
				*s -= 32;
				mem = 0;
			}
			else
			{
				mem = 0;
			}
		}
		s++;
	}
	return (s);
}
