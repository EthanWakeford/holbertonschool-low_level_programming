#include "main.h"

/**
*get_bit - returns the value of a bit at a given index
*@n: number
*@index: index of bit to get
*Return: value of bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
	return ((n & (1 << index)) >> index);
}
