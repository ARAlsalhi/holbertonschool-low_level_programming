#include <stdio.h>
#include "dog.h"

/**
* print_dog - prints the contents of a struct dog
* @d: pointer to the struct dog
*
* Description: Prints the name, age, and owner of a dog.
* If d is NULL, nothing is printed.
* If name or owner is NULL, (nil) is printed instead.
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %.6f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
