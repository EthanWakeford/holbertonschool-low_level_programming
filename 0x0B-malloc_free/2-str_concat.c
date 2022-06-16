#include "main.h"

/**
*lengthof - gets length of string
*@str: string
*Return: len
*/

int lengthof(char *str)
{
	int len = 0;
	
	if (str == NULL)
		return (0);
	while (str[len])
	{
		len++;
	}
	return (len);
}

/**
*str_concat - concats 2 strings
*@s1: string 1
*@s2: string 2
*Return: NUll if failed, ptr if passed
*/

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len1, len2, i;

	len1 = lengthof(s1);
	len2 = lengthof(s2);
	ptr = (char *)malloc((len1 * sizeof(char)) + (len2 * sizeof(char)) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = i; i < (len1 + len2); i++)
	{
		ptr[i] = s2[i - len1];
	}
	return (ptr);
}
