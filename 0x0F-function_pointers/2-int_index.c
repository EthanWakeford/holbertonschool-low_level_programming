#include "function_pointers.h"

/**
*int_index - runs function for each element of array until it returns true
*@array: array to iterate
*@size: size of array
*@cmp: given function to run
*Return: -1 if fails or no true found, i if successful
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
