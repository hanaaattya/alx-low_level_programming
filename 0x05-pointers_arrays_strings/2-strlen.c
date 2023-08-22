#include "main.h"

/**
 * _strlen -  returns the length of a string
 * @s: int parameter
 *
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	for (length = 0; *s != '\0'; s++)
		++length;
	return (length);
}
