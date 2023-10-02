#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk -  searches a string for any of a set of bytes.
 *
 *@s: ptr
 *@accept: ptr
 *
 * Return: s if found or NULL if not
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *accept_cpy;

		accept_cpy = accept;

	while (*accept_cpy != '\0')
	{
	if (*s == *accept_cpy)
		return (s);
	accept_cpy++;
	}
	s++;
	}
	return (NULL);
}
