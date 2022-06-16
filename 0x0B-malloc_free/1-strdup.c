#include "main.h"

/**
*_strdup - returns pointer to newly allocated space, which is copy of str
*@str: string to copy
*Return: NUll if unsucessful, ptr otherwise
*/

char *_strdup(char *str)
{
	char *ptr;
	int len = 1;
	int i;

	if (str == NULL)
		return (NULL);
	while (str[len])
	{
		len++;
	}
	ptr = (char *)malloc((len * sizeof(char)) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
