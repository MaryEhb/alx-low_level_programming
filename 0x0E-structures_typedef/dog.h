#ifndef DOG_HEADER
#define DOG_HEADER

/**
 * struct dog - dog
 * @name: name
 * @age: age
 * @owner: own
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
