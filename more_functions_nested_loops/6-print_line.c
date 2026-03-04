#include "main.h"

/**
* print_line - draws a stright line in the terminal
* @n: number of tims the char '_' shpuld be print
*
* Retrun: void
*/
void print_line(int n)
{
int i;

	if (n <= 0)
	{
	_putchar('\n');
	return;
	}

	for (i = 0; i < n; i++)
	{
	_putchar('_');
	}
	_putchar('\n');
}
