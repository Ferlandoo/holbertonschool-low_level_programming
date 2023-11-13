#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that frees dogs
 */

void free_dog(dog_t *d)
{
	free (d);
}
