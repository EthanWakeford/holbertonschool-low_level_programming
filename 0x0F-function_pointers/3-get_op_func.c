#include "3-calc.h"

/**
*get_op_func - selects the correct funtion to perfrom the operation selected
*@s: operator passed as argument
*Return: output of selected function
*/

int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	if (strlen(s) != 1)
		return (NULL);
	while (ops[i].op != NULL && strcmp(ops[i].op, s) != 0)
	{
		i++;
	}
	return (ops[i].f);
}
