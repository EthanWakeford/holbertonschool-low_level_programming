#include "main.h"

/**
*_strspn - gets the length of a prefix substring
*@s: string
*@accept: string to compare to
*Return: count
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count = 1;

	for (i = 0; s[i] != '\0' && count != 0; i++)
	{
		count = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count = 1;
			}
		}

	}
	return (i - 1);
}
