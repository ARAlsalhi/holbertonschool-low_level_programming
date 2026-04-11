#include <stdio.h>
#include "function_pointers.h"

/**
*int_index - search for an int
*@array: array of int
*@size: number of element in the array
*@cmp: pointer tp cmp funtion
*Return: index of first matching element, or -1
*/



int int_index(int *array, int size, int (*cmp)(int))
{

int i;

if (array == NULL || size <= 0 || cmp == NULL)
return (-1);

for (i = 0; i < size; i++)
{
	if (cmp(array[i]) != 0)
		return (i);
}

return (-1);
}
