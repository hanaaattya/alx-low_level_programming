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
	int found;

	unsigned int count;

	while (*s != '\0')
	{
	found = 0;
	for (accept = 0; *accept != '\0'; accept++)
	{
	if (*s == *accept)
	{
		found = 1;
	break;
	}
	}
	if (found)
		count++;
	else
		break;
	s++;
	}
	return (count);
}
