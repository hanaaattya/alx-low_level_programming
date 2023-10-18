#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concat 2  strings
 * @s1: first string
 * @s2: second string
 * @n: number of string that should be concatenated from s2 to s1
 *
 * Return: pointer to concat
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_1 = (s1 != NULL) ? strlen(s1) : 0;
	unsigned int len_2 = (s2 != NULL) ? strlen(s2) : 0;
	char *concat;

	n = (n >= len_2) ? len_2 : n;
	concat = malloc(sizeof(char) * (len_1 + n + 1));
	if (concat == NULL)
		return (NULL);
	if (s1 != NULL)
		strcpy(concat, s1);
	else
	{
		concat[0] = '\0';
	}
	strncat(concat, s2, n);
	return (concat);
}
