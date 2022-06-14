#include "main.h"

/**
*main - prints the number of command line arguments
*@argc: num of arguments
*@argv: pointer to array of arguments
*Return: always zero
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", --argc);
	return (0);
}
