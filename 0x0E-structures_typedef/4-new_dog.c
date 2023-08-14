#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - create a dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: ptr to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	char *name_cp;
	char *owner_cp;

	if (!name || !owner)
	{
		return (0);
	}

	ptr = malloc(sizeof(dog_t));

	if (!ptr)
		return (0);

	owner_cp = malloc(strlen(owner) + 1);

	if (!owner_cp)
	{
		free(owner_cp);
		free(ptr);
		return (0);
	}

	name_cp = malloc(strlen(name) + 1);

	if (!name_cp)
	{
		free(name_cp);
		free(ptr);
		return (0);
	}

	strcpy(name_cp, name);
	strcpy(owner_cp, owner);
	ptr->name = name_cp;
	ptr->age = age;
	ptr->owner = owner_cp;

	return (ptr);
}
