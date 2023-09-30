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
	while (*accept != '\0')
	{
	if (*s == *accept)
		return (s);
	accept++;
	}
	s++;
	}
	return (NULL);
}
