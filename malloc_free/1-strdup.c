#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *           containing a copy of the string given as a parameter
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string, or NULL if str is NULL
 *         or if memory allocation fails
 */

char *_strdup(char *str)
{

int i;

int len;

char *copy;

if (str == NULL)
	return (NULL);
len = 0;
while (str[len] != '\0')
len++;

copy = malloc((len + 1) * sizeof(char));

for (i = 0; i < len; i++)
copy[i] = str[i];

copy[i] = '\0';

return (copy);

}
