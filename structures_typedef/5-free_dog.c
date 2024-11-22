#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - function
 * @d: pointer
 * Retrun: frees d
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
