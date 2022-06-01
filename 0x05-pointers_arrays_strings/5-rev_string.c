#include "main.h"

/**
*rev_string - reverses a string
*
*@s: string
*/

void rev_string(char *s)
{
	int end = 0;
	int start = 0;
	char temp;
	int middle;

	while (s[end] != '\0')
		end++;

	middle = (end / 2);
	for (end = (end - 1); end >= middle; end--)
		{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		}
}
