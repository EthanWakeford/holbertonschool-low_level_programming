#include "main.h"

int squareroot(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i != n)
	{
		i = squareroot(n,i + 1);
	}
	return (i);
}


int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (squareroot(n, 1));
}
