#include "main.h"

/**
*array_range - creates array of integers
*@min: min number
*@max: max number
*Return: ar
*/

int *array_range(int min, int max)
{
	int i;
	int *ar;
	int dif = max - min;

	if (min > max)
		return (NULL);
	ar = malloc((dif + 1) * sizeof(int));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i <= dif; i++)
	{
		ar[i] = min;
		min++;
	}
	return (ar);
}
