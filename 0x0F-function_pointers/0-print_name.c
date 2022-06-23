#include "function_pointers.h"

/**
*print_name - runs a function to print a name
*@name: the name
*@f: function pointer
*/

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	if (name == NULL)
		return;
	f(name);
}
