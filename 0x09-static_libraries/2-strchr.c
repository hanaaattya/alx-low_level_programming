#include "main.h"

/**
 * *_strchr - locates a character in a string.
 *
 *@s: ptr
 *@c: var
 *
 * Return: s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
		return (s);
	s++;

	}
	if (*s == '\0')
	{
		return (s);
	}
	return (0);
}
