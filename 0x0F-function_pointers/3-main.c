#include "3-calc.h"

/**
*main - performs a simple operation
*@argc: argument count
*@argv: pointer to arguments
*Return: always 0
*/

int main(int argc, char **argv)
{
	int a, b;
	int (*op)(int a, int b);

	if (argc != 4)
	{	
		printf("ERROR\n");
		exit (98);
	}
	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("ERROR\n");
		exit (99);
	}
	if (((strcmp(argv[2], "/") == 0) || (strcmp(argv[2], "%") == 0))&& (strcmp(argv[3], "0") == 0))
	{
		printf("ERROR\n");
		exit (100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", (op(a, b)));
	return (0);
}
