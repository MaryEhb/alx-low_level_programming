#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string.
 * @s: first character in string pointer
 * Return: string length
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}

	return (count);
}

/**
 * _strcpy -  copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: buffer pointer
 * @src: string pointer
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}

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

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (!dog->name)
	{
		free(dog);
		return (0);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (!dog->owner)
	{
		free(dog);
		return (0);
	}

	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}
