#include "main.h"
#include <stddef.h>

/**
* *_strchr - it is search the char in the string by using array
* @s: the string which we will search the char on it
* @c: it is the char which we need it
*
* Return:a pointer to the first occurrence of the character c in the string s
*
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	if (s[i] == c)
	return (s + i);
	else if (s[i] == '\0')
	break;
	}
	return (NULL);

}
