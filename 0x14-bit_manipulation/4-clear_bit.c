#include "main.h"

/**
*clear_bit - set value of bit to 0 at index
*@n: pointer to number
*@index: index of but
*Return: sadf
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
