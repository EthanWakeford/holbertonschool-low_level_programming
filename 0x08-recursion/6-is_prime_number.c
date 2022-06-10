#include "main.h"

/**
*prime - finds if int n is prime
*@n: int to check if prime
*@i: factor to eval
*Return: 1 if i*i>n, 0 if n%i==0, else return i
*/

int prime(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		i = prime(n, i + 1);
	}
	return (i);
}

/**
*is_prime_number - finds if number is prime
*@n: number to check
*Return: 1 if prime, 0 if not prime
*/

int is_prime_number(int n)
{
	int x;

	if (n <= 3)
	{
		return (0);
	}
	x = prime(n, 2);
	if (x)
	{
		return (1);
	}
	return (0);
}
