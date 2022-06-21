#include "main.h"

/**
*malloc_checked - allocates memory using malloc
*@b: amount of memory to allocate
*Return: pointer to memory
*/

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
