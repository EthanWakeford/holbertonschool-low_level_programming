#include "main.h"
#include <stddef.h>

/**
*_strstr - locates a substring
*@haystack: string
*@needle: substring
*Return: pointer to the located substring, NULL if not found
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			while (needle[i] != '\0' && haystack[i] != '\0')
			{
				if (needle[i] != haystack[i])
				{
					return (NULL);
				}
				if (haystack[i] == '\0')
				{
					break;
				}
				i++;
			}
		}
		if (haystack[i] == '\0')
		{
			break;
		}
		haystack++;
	}
	if (*haystack == '\0')
	{
		return (NULL);
	}
	return (haystack);
}
