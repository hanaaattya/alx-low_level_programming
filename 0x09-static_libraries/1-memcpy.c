#include "main.h"

/**
 * *_memcpy - copies memory area.
 *
 *@dest: ptr
 *@src: ptr
 *@n: var
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		{
		dest[i] = src[i];
		}
return (dest);
}
