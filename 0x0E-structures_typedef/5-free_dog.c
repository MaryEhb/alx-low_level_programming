#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free dogs
 * @d: dog
 * Return: 0
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
