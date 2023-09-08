#include "main.h"
#include <stdlib.h>

/**
 * *_strdup -  returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string
 *
 * Return: NULL if str is NULL and
 * if success returns a pointer to the duplicated string
 * and returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int a = 0;

	int size = 0;

	char *i;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	i = malloc(size * sizeof(*str) + 1);

	if (i == NULL)
		return (NULL);

	for (; a < size ; a++)
	i[a] = str[a];

	return (i);
}
