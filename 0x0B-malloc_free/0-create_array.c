#include "main.h"

/**
*create_array - creates an array and initializes it with char c
*@size: size of array
*@c: char to init with
*Return: null if size == 0 or malloc fails, else return pointer to array
*/

char *create_array(unsigned int size, char c)
{
	char *ar;
	int i;

	if (size == 0)
		return (NULL);
	ar = (char *)malloc(size);
	for (i = 0; i < 98; i++)
	{
		ar[i] = c;
	}
	if 	(!(ar))
		return (NULL);
	return (ar);
}
