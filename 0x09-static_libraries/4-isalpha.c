#include "main.h"

/**
 * _isalpha - check if its a letter
 *
 * @c:take input from other function
 *
 * Return: returns 1 if 'c' is true otherwise  Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
	return (1);
}
	else
{
	return (0);
}
}
