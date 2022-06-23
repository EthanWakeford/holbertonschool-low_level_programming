#include "function_pointers.h"

/**
*array_iterator - runs a function on each element of array
*@array: the array
*@size: size of array
*@action: function pointer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array = NULL || size == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
