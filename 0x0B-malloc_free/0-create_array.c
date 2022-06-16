#include "main.h"

char *create_array(unsigned int size, char c)
{
	char *ar;
	int i;

	ar = (char*)malloc(size);
	for (i = 0; i < 98; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
