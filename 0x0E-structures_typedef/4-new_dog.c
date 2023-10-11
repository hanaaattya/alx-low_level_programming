#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *new_dog - creates new structure for dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
	return (NULL);
	}
	new_dog->name = (char *)malloc(strlen(name) + 1);
	new_dog->owner = (char *)malloc(strlen(owner) + 1);
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
	free(new_dog);
	free(new_dog->name);
	free(new_dog->owner);
	return (NULL);
	}
	strcpy(new_dog->name, name);
	strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
