#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that frees dogs
 * @d: dog pointer
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
		free(sec_dog);
		free(sec_name);
		free(sec_owner);
	}
}
