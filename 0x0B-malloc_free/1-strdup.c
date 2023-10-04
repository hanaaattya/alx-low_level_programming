#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicate string
 * @str: string
 *
 * Return: duplicated_str.
 */
char *_strdup(char *str)
{
	char *duplicated_str;

	if (str == NULL)
	{
	return (NULL);
	}
	duplicated_str = malloc((strlen(str) + 1) * sizeof(char));
	if (duplicated_str == NULL)
	{
	return (NULL);
	}
	strcpy(duplicated_str, str);
	return (duplicated_str);
}
