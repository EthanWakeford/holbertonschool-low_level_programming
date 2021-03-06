#include "main.h"

/**
*stringlength - returns length of string
*@str: string to find
*Return: i
*/

int stringlength(char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
*string_nconcat - concats 2 strings to Nth byte
*@s1: string 1
*@s2: string 2
*@n: Nth byte
*Return: pointer to new string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	char *ptr;
	int l1 = stringlength(s1);
	int l2 = stringlength(s2);

	if ((int)n < l2)
		ptr = malloc(l1 + (n * sizeof(char)) + 1);
	else
		ptr = malloc((l1 + l2) + 1);
	if (ptr == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			ptr[i] = s1[i];
		}
	}
	i = 0;
	if (s2 != NULL)
	{
		for (i = 0; i < (int)n && s2[i] != '\0'; i++)
		{
			ptr[i + l1] = s2[i];
		}
	}
	ptr[i + l1] = '\0';
	return (ptr);
}
