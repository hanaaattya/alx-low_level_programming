#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenate 2 strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: concat.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	concat = (char *)malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	if (concat == NULL)
	{
	return (NULL);
	}
	strcpy(concat, s1);
	strcat(concat, s2);
	return (concat);
}
