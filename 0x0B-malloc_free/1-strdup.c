#include "main.h"

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
	ptr = (char *)malloc(len * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		ptr[i] = str[i];
	}
	return(ptr);
}
