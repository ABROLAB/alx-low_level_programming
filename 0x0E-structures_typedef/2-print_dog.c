#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - print a struct dog
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nll)";
	if (d->owner == NULL)
		d->owner = "(nll)";
	printf("Name: %s\nAge: %f\nOwner: %\n", d->name, d->age, d->owner);
}
