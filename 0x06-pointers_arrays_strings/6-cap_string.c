#include "holberton.h"

/**
*cap_string - capitalizes each word
*@s: the string
*Return: s
*/

char *cap_string(char *s)
{
	int i, c;
	int mem = 0;
	char sep[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (c = 0; sep[c] != '\0'; c++)
		{
			if (s[i] == sep[c])
			{
				mem	= 1;
			}
		}
		if (mem)
		{
			if ((s[i] >= 97) && (s[i] <= 122))
			{
				s[i] = s[i] - 32;
				mem = 0;
			}
			else
			{
				mem = 0;
			}
		}
	}
	return (s);
}
