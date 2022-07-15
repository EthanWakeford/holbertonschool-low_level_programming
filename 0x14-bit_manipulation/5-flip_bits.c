#include "main.h"

/**
*flip_bits - return the number of bits you need to flip to get different num
*@n: number
*@m: second number
*Return: asd
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	int i = n ^ m;

	while (i > 0)
	{
		count++;
		i &= (i - 1);
	}
	return (count);
}
