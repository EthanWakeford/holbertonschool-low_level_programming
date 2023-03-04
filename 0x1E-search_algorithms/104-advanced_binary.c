#include "search_algos.h"

/**
 * advanced_binary_search - uses binary search to search for a value in a sorted array
 *
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of value, or -1 if array is null or value not present
*/

int advanced_binary(int *array, size_t size, int value)
{
	int low = 0, high = size - 1;

	if (array == NULL)
		return (-1);

	return (advanced_binary_recursion(array, value, low, high));
}

/**
 * advanced_binary_recursion - helper function that uses recursion
 *
 * @array: array to sort
 * @value: value to search for
 * @low: low value of subarray
 * @high: high value of subarray
 *
 * Return: index of value, or -1 if array is null or value not present
*/

int advanced_binary_recursion(int *array, int value, int low, int high)
{
	int mid;

	print_array(array, low, high);

	mid = ((high - low) / 2) + low;
	if (array[mid] == value)
	{
		if (low == mid)
			return (mid);
		else
			return (advanced_binary_recursion(array, value, low, mid - 1));
	}

	if (high <= mid)
		return (-1);

	if (array[mid] > value)
	{
		return (advanced_binary_recursion(array, value, low, mid - 1));
	}
	else
	{
		return (advanced_binary_recursion(array, value, mid + 1, high));
	}
}

/**
 * print_array - prints out an array
 *
 * @array: array to print
 * @low: low value of subarray
 * @high: high value of subarray
*/

void print_array(int *array, int low, int high)
{
	int i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		if (i > low)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}
