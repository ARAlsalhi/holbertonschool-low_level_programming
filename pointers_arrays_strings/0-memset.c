#include "main.h"

/**
* _memset - fill the memory area
* @s: pointer to the memory area
* @b: constant byte to fill with
* @n: number of bytes to fill
*
* Return: pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}
