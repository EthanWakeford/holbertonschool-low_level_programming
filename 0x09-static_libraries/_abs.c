#include "main.h"

/**
*_abs - returns absolute value of integer
*
*@c: integer to work on
*Return: absolute value
*/

int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}
	else
	{
		c = -c;
		return (c);
	}
}
