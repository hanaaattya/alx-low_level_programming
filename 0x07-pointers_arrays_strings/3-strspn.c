#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 *@s: ptr
 *@accept: ptr
 *
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	int found = 0;
	char *a = accept;
	unsigned int count = 0;

	while (*s != '\0')
	{
	found = 0;
	for (a = accept; *a != '\0'; a++)
	{
	if (*s == *accept)
	{
		found = 1;
	break;
	}
	}
	if (found)
	{
	count++;
	}
	else
	{
	break;
	}
	s++;
	}
	return (count);
}
