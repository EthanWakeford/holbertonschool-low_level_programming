#include "main.h"

/**
*_strstr - locates a substring
*@haystack: string
*@needle: substring
*Return: pointer to the located substring, NULL if not found
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (*haystack)
	{
		if (*haystack == *needle)
		{
			while (needle[i] && haystack[i])
			{
				if (needle[i] != haystack[i])
				{
					return ('\0');
				}
				i++;
				if (!haystack[i])
				{
					break;
				}
			}
		}
		haystack++;
	}
	if (!*haystack)
	{
		return ('\0');
	}
	return (haystack);
}
