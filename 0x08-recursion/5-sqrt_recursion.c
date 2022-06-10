#include "main.h"

/**
*squareroot - increments facotor until it equals n
*@n: number to find sqrt of
*@i: factor, always starts at one
*Return: factor once squared equals n, -1 if i*i > n(imperfect square)
*/

int squareroot(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i != n)
	{
		i = squareroot(n, i + 1);
	}
	return (i);
}

/**
*_sqrt_recursion - finds square root of interger n
*@n: number to work on
*Return: the return of function squareroot, if n<0 then return -1
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (squareroot(n, 1));
}
