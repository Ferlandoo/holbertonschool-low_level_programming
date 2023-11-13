#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to struct dog
 * @name: Pointer to dog's name
 * @age: Dog's age
 * @owner: Pointer to dog's owner name
 * Description: This function initializes a variable of type struct dog
 * with the given values for name, age, and owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
