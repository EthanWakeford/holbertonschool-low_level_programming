#include "3-calc.h"

/**
*main - performs a simple operation
*@argc: argument count
*@argv: pointer to arguments
*Return: always 0
*/

int main(int argc, char **argv)
{
	int a, b, cmpdiv, cmpmod;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	cmpdiv = (strcmp(argv[2], "/"));
	cmpmod = (strcmp(argv[2], "%"));
	if ((cmpdiv == 0 || cmpmod == 0) && (strcmp(argv[3], "0")) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", (op(a, b)));
	return (0);
}
