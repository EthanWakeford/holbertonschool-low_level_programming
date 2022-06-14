#include "main.h"

/**
*main - multiplies 2 numbers
*@argc: num of args
*@argv: pointer to array of args
*Return: 1 if error, 0 if successful
*/

int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	printf("%d\n", i * j);
	}
	return (0);
}
