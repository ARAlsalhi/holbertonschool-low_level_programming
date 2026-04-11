#include <stdio.h>
#include "function_pointers.h"

/**
*print_name - print a name using a funtion
*@name: the name to print
*@f : funtion pointer
*/

void print_name(char *name, void (*f)(char *))
{

if (name == NULL || f == NULL)
	return;
else
	f(name);
}

