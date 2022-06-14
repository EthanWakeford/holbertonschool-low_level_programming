#include "main.h"

/**
*main - prints all arguments it receives
*@argc: num of arguments
*@argv: pointer to array of args
*Return: always 0
*/

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
