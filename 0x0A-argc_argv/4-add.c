#include "main.h"

/**
*main - adds args together
*@argc: num of args
*@argv: pointer to array of args
*Return: 0 if successful, 1 if not
*/

int main(int argc, char *argv[])
{
	int i, j, num, num2;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (num = 1; num < argc; num++)
		{
			for (num2 = 0; argv[num][num2] != '\0'; num2++)
			{
				if (argv[num][num2] > 57 || argv[num][num2] < 48)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		i = atoi(argv[1]);
		for	(num = 2; num < argc; num++)
		{
			j = atoi(argv[num]);
			i = i + j;
		}
		printf("%d\n", i);
	}
	return (0);
}
