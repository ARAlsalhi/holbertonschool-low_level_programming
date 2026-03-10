#include "main.h"

/**
* _memcpy - funtion copyies
* @dest: it take the copy memory from the pointer src
* @src: it is display the bytes in memory
* @n: bytes from memory area
*
*Return: the pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
