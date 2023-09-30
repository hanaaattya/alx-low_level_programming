#include "main.h"
#include <stddef.h>

/**
 * *_strstr - locates a substring.
 *
 *@haystack: ptr
 *@needle: ptr
 *
 * Return: haystack if found or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *needle_cpy = needle;
	char *haystack_cpy = haystack;

	if (*needle_cpy == '\0')
		return (haystack);

	while (*haystack_cpy != '\0'){
	while (*needle_cpy !='\0' && *haystack_cpy == *needle_cpy)
	{
	needle_cpy++;
	haystack_cpy++;
	}
	if (*needle_cpy == '\0')
		return (haystack);

	haystack_cpy++;
}
	return (NULL);
}
