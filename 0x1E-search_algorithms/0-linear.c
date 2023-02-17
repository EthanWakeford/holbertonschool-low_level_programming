#include "search_algos.h"

/**
 * linear_search - uses linear search to find value in array
 *
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of value, or zero if array is NULL or value not present
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
