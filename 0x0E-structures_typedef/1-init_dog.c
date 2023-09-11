#include "dog.h"

/**
 * init_dog - Initializes var of type struct dog
 * @d: Pointer to the struct dog to initialize
 * @name: Pointer to  dog's name string
 * @age: dog's age
 * @owner: Pointer to the owner's name
 *
 * return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name =name;
	d->age = age;
	d->owner = owner;
	}
}
