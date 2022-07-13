#include "main.h"

/**
*set_bit - sets the value of bit to 1 at index
*@n: number
*@index: index of bit
*Return: 0
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	*n = *n | 1 << index;
	return (1);
}
