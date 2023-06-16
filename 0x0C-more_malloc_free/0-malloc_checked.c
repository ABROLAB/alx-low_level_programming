#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - cause normall process termination with a status value of 98
 *
 * @b: allocated memory
 *
 * Return: a pointer to the memory
 */
void *malloc_checked(unsigned int b)
{
        void *i;

        i = malloc(b);
        if (i == NULL)
		exit(98);
	return (i);
}
