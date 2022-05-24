#include "main.h"

/**
*_islower - checks is character is lowercase
*
*@c: character
*
*Return: 1 if lower, 0 otherwise
*
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
