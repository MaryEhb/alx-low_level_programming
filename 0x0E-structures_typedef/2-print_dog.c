#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


/**
 * print_dog - print dog info
 * @d: dog
 * Return: 0
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\n", (d->name ? d->name : "(nil)"));
	if (d->age)
	{
		printf("Age: %f\n", d->age);
	}
	else
	{
		printf("Age: (nil)");
	}

	printf("Owner: %s\n", (d->owner ? d->owner : "(nil)"));
}
