#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary str to regular number unsigned int
 * @b: ptr to the binary str
 * Return: The converted number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int converted = 0;

	if (b == NULL)
	{
	return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
	if (b[i] == '0')
	converted = converted * 2;
	else if (b[i] == '1')
	converted = converted * 2 + 1;
	else
	return (0);
	}
	return (converted);
}
