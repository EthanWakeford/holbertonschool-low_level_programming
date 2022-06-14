#include "main.h"

/**
*main - prints out name of file
*@argc: num of command line arguments
*@argv: pointer to array of arguments
*Return: always 0
*/

int main(int argc, char *argv[])
{
	int i;

	(void)argc;
	for (i = 0; argv[0][i] != '\0'; i++)
	{
		_putchar(argv[0][i]);
	}
	_putchar('\n');
	return (0);
}
