#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated
 * @d: Pointer
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
