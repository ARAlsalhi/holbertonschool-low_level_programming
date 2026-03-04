#include "main.h"

/**
* print_diagonal - draw a digonal line on the termainal
* @n : number of times the '\' sholde be print
*
* return : void
*/
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
	_putchar('\n');
	return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
		_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
	}
}
