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
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (0);

	dog = (dog_t *) malloc(sizeof(dog_t));

	if (!dog)
		return (0);

	dog->name = malloc(sizeof(char) * (strlen(name) + 1));

	if (!dog->name)
	{
		free(dog);
		return (0);
	}

	dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));

	if (!dog->owner)
	{
		free(dog);
		return (0);
	}

	dog->name = strcpy(dog->name, name);
	dog->age = age;
	dog->owner = strcpy(dog->owner, owner);

	return (dog);
}
