#include "main.h"

/**
 * _islower- to check the lower case char
 *
 * @c:The character to check
 *
 * Return: returns 1 if 'c' is lowercase otherwise  Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
