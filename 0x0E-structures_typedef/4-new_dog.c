#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog with a copy of name and owner
 * @name: name of the dog ptr
 * @age: Age of the dog
 * @owner: owner's name ptr*
 * Return: Pointer to the newly created dog_t structure, or NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;

	char *cpyofname;

	char *cpyofowner;

	new_dog_ptr = malloc(sizeof(dog_t));

	if (new_dog_ptr == NULL)
	{
		return (NULL);
	}

	cpyofname = strdup(name);
	cpyofowner = strdup(owner);

	if (cpyofname == NULL || cpyofowner == NULL)
	{
	free(new_dog_ptr);
	free(cpyofname);
	free(cpyofowner);
	return (NULL);
	}

	new_dog_ptr->name = cpyofname;
	new_dog_ptr->age = age;
	new_dog_ptr->owner = cpyofowner;

	return (new_dog_ptr);
}
