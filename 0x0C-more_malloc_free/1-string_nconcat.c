#include "main.h"

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

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	char *ptr;
	int l1 = stringlength(s1);
	int l2 = stringlength(s2);

	if (l2 == 0 || n == 0)
		return (s1);
	if ((int)n < l2)
		ptr = malloc(l1 + (n * sizeof(char)) + 1);
	else
		ptr = malloc((l1 + l2) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i < (int)n && s2[i] != '\0'; i++)
	{
		ptr[i + l1] = s2[i];
	}
	ptr[i + l1] = '\0';
	return (ptr);
}
